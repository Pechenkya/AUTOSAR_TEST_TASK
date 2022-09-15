# AUTOSAR_TEST_TASK
**Completed by:** Petro Bondar

## **Task 1.1** (For solution and explanation check Task 1.1 folder)
[x] To make it possible to calculate minimum and maximum value of two arguments please implement both:
  - "MIN(a, b)" and/or "MAX(a, b)" macro-functions and
  - "Int min(int a, int b)" and/or "Int max(int a, int b)" regular functions
  
[x] Execute code in main

[x] Please provide the output and justify it. Everything would be interesting to know.

## **Task 1.2** (For solution and explanation check Task 1.2 folder)
[x] To make it possible (much simpler) to interact with HW elements via registers please implement next macros:
- #define SET_BIT(x, p) // set (set to 1) proper bit into the "x" byte by "p" position
- #define CLR_BIT(x, p) // clear (set to 0) proper bit into the "x" byte by "p" position
- #define TGL_BIT(x, p) // flip/toggle proper bit into the "x" byte by "p" position
- #define CHK_BIT(x, p) // check proper bit into the "x" byte by "p" position

[x] To make it possible to output the data in human readable binary format please implement the function like "void Int2BitStr(int x, char * str,
int size)" that shall convert an integer variable into the string in binary format like: "0b11001100" after that this string could be printed with
the use of the "%s" "printf()" formatting descriptor.

[x] Finally, please implement a main function with the use of these macros and please print the output after you have used the macros.

## **Task 2** (For solution and explanation check Task 2 folder)
Using the design tools, please design the system that shall satisfy next requirements:
1. The Board shall be Arduino Uno – 1 pc
2. Sensors:
2.1. Potentiometer – 1 pc
3. The actuators:
3.1. LEDs – 4 pcs (Red, Green, Blue, Yellow)
4. LEDs shall blink sequentially starting from the Red LED with the various period.
5. Period shall depend on the Potentiometer position:
  - min value 100 ms
  - max value 10 000 ms
