# Task 1.1 solution
## Code basic solutions

[x] While providing min (max) function and MIN (MAX) macro I used same ternary operator, in this cases it behaves different, but still provide correct answer.

It happens, because of macro nature: when we call macro preprocessor just changes macro call by it's code by setting parameters just as expression (not a variable),
as a result expression parameters like x1++ or ++x1 were not just calculated once and used as one value, they were called twice after macro disclosure 
(both a were changed with ++x1).

As opposite, function calls behave as we expect: expression value is calculated only once and then it's used in variable.

[x] I provided tests in main() for both functions and macros to see, how it behaves.

## Execution example
![Task 1 1](https://user-images.githubusercontent.com/48071683/190522285-03b94a01-9e28-4ab0-9f68-dac09d181319.png)
