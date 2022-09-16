# Task 1.2 solution
## Code basic solutions
[x] While providing macros I've used parentheses around parameters in case of some expression in it. Because macros just substitute their code to place, where they are called in preprocessing stage, the expression would not be calculated before the macro is called, so we need to add parentheses, to avoid undefined calculation order.

[x] For bitwise shifts better use unsigned integers to avoid undefined behavior.

[x] I've used bit-wizardry to calculate or transform numbers in macro:
  1. SET_BIT(x, p): set p-th bit of x to 1
     - We take constant 1 (00...01)
     - Move its only nonzero bit to p-th position
     - Use bitwise OR to set p-th bit to 1

  2. CLR_BIT(x, p): set p-th bit of x to 1
     - We take constant 1 (00...01)
     - Move its only nonzero bit to p-th position
     - Use negation to swap for all bits: 0 <-> 1
     - Use and to ignore all other bits and set p-th bit to 0

  3. TGL_BIT(x, p): negate p-th bit of x
     - We take constant 1 (00...01)
     - Move its only nonzero bit to p-th position
     - We use bitwise XOR which works as negation on p-th bit
  
 4. CHK_BIT(x, p): return p-th bit value of x
     - We shift x to the left with p bits to set p-th bit on position 0
     - Use bitwise AND to check this last bit (if it's nonzero -> it's 1, otherwise -> it's zero)

[x] To convert int to string I used the shift method: by shifting times, every time check the last bit and add it to the string.
  
[x] I've provided basic tests in main() to check every macro.
  
## Execution exampe (with provided test)
### Test code
![Task 1 2 Tests](https://user-images.githubusercontent.com/48071683/190519783-7aeacf43-f8a2-4cd8-a83f-4c8e9dbeec5f.png)

### Execution result
![Task 1 2](https://user-images.githubusercontent.com/48071683/190519693-2c0167e6-09b1-41db-ad05-31cd69b35689.png)
