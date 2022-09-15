#include <cstdio>
#include <cstdlib>

// Defining macros for bit-manipulation

// Set 'p' bit to 1 (we use constant 1 and shift it to proper position)
#define SET_BIT(x, p) (x) | (1u << (p))

// Set 'p' bit to 0
#define CLR_BIT(x, p) (x) & (~(1u << (p)))

// Negate 'p' bit (we use shifted 1 and XOR, which give us negation)
#define TGL_BIT(x, p) (x) ^ (1u << (p))

// Return value of 'p' bit 
#define CHK_BIT(x, p) ((x) >> (p)) & 1u

//-------------------------------------

// Converting int to string of bits 
// (Warning: function allocates memory that must be cleared or reused in this function)
char* int_to_bit_str(int x, char * str, int size = (sizeof(int) * 8))
{
	// Clearing previous string (?)
	if (str != NULL)
	{
		free(str);
		str = NULL;
	}

	// Allocate memory and check if it was allocated properly
	str = (char *)malloc(sizeof(int) * 8 + 3);
	if (str == NULL)
		return str;

	// Set prefix and string end
	str[0] = '0';
	str[1] = 'b';
	str[size + 2] = '\0';

	// First we convert to unsigned (no undefined behaviour with bit shifts)
	unsigned _x = x;

	// Build string using bit shifts, bit AND, constant 1 (to mark bits)
	for (int i = size + 1; i > 1; --i)
	{
		// Check last bit (if value != 0 -> last bit is 1)
		str[i] = (_x & 1) ? '1' : '0';

		// Shift last bit
		_x >>= 1;
	}

	return str;
}
//

// Function to print integer as binary string
void print_int_and_binary(int num)
{
	char* str = int_to_bit_str(num, NULL);
	printf("%d is %s\n", num, str);
	free(str);
}

int main()
{
	// Set initial value to 10
	int num = 10;
	printf("Initial value: ");
	print_int_and_binary(num);
	

	// Test 1 (SET_BIT): set 11th bit with 1
	num = SET_BIT(num, 11);
	printf("\nAfter SET_BIT: ");
	print_int_and_binary(num);

	// Test 2 (CLR_BIT): set 3rd bit with 0
	num = CLR_BIT(num, 3);
	printf("After CLR_BIT: ");
	print_int_and_binary(num);

	// Test 3 (TGL_BIT): tougle first 11th, then 10th bit
	num = TGL_BIT(num, 11);
	num = TGL_BIT(num, 10);
	printf("After TGL_BIT: ");
	print_int_and_binary(num);

	// Test 4 (CHK_BIT): check 1st bit and then check 11th bit
	printf("\nValue of CHK_BIT(%d, %d): %d", num, 1, CHK_BIT(num, 1));
	printf("\nValue of CHK_BIT(%d, %d): %d", num, 11, CHK_BIT(num, 11));
}