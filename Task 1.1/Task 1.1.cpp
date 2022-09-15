#include <cstdio>

// MIN and MAX macros
#define MIN(a, b) a < b ? a : b
#define MAX(a, b) a > b ? a : b
//

// min and max functions
int min(int a, int b)
{
	return a < b ? a : b;
}

int max(int a, int b)
{
	return a > b ? a : b;
}
//

int main()
{
	// Setting initial values
	int x1 = 3, x2 = 3;
	int y1 = 5, y2 = 5;

	printf("----------- Test 1 (MIN macro and min function) -----------\n\n");
	printf("Initial values: x = %d, y = %d\n\n", x1, y1);
	
	printf("--- Macro ----\n");
	printf("MIN(%d, %d) = %d;\n", x1, y1, MIN(x1++, y1));
	printf("MIN(%d, %d) = %d;\n", x1, y1, MIN(++x1, y1));
	printf("-- Function --\n");
	printf("min(%d, %d) = %d;\n", x2, y2, min(++x2, y2));
	printf("min(%d, %d) = %d;\n", x2, y2, min(x2++, y2));

	// Reset initial values
	x1 = x2 = 3;
	y1 = y2 = 5;

	printf("\n\n----------- Test 2 (MAX macro and max function) -----------\n\n");
	printf("Initial values: x = %d, y = %d\n\n", x1, y1);

	printf("--- Macro ----\n");
	printf("MAX(%d, %d) = %d;\n", x1, y1, MAX(x1, y1++));
	printf("MAX(%d, %d) = %d;\n", x1, y1, MAX(x1, ++y1));
	printf("-- Function --\n");
	printf("max(%d, %d) = %d;\n", x2, y2, max(x2, y2++));
	printf("max(%d, %d) = %d;\n", x2, y2, max(x2, ++y2));
}
