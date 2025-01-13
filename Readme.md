# Calculator Program Documentation

## Introduction
It offers a variety of mathematical operations, ranging from basic arithmetic to advanced matrix operations, number manipulations, and geometric area calculations. The program is written in C and provides a user-friendly menu-driven interface.

---

## Features

### Main Menu Options
1. **Addition**: Adds two numbers.
2. **Subtraction**: Subtracts one number from another.
3. **Multiplication**: Multiplies two numbers.
4. **Division**: Divides one number by another.
5. **Matrix Operations**:
   - Matrix Addition
   - Matrix Subtraction
   - Matrix Multiplication
   - Back
6. **Simple Interest Calculation**: Calculates the simple interest based on principal, rate, and time.
7. **Celsius to Fahrenheit Conversion**: Converts temperature from Celsius to Fahrenheit.
8. **Digit Manipulation**:
   - Palindrome Number Check
   - Prime Number Check
   - Perfect Number Check
   - Armstrong Number Check
   - Factorial Calculation
   - Factors of a Number
   - Spy Number Check
   - Back
9. **Geometric Area Calculations**:
   - Area of Rectangle
   - Area of Square
   - Area of Triangle
   - Area of Circle
   - Back
10. **Exit from the program**: Terminates the program.

---

## Usage

### Compilation and Execution
1. Save the code in a file with a `.c` extension, e.g., `calculator.c`.
2. Compile the program using a C compiler (e.g., GCC):
   ```bash
   gcc calculator.c -o calculator -lm
   ```
   The `-lm` flag is necessary to link the math library for functions like `sqrt` and `pow`.
3. Run the compiled executable:
   ```bash
   ./calculator
   ```

### Navigation
1. Upon running, the program displays the main menu.
2. Enter the corresponding number to choose an operation.
3. Follow the prompts to provide input values.
4. Results are displayed after each operation.
5. To back or exit, choose the `Back` or `Exit` option from the menu.

---

## Code Structure

### Header Files
```c
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
```
- **`stdio.h`**: For input/output operations.
- **`stdlib.h`**: For memory allocation and program termination.
- **`math.h`**: For mathematical functions like `sqrt` and `pow`.

### Functions
- **Arithmetic Operations**: `add()`, `sub()`, `multi()`, `divi()`
- **Matrix Operations**: `mtxadd()`, `mtxsub()`, `mtxmulti()`
- **Interest Calculation**: `si()`
- **Temperature Conversion**: `ctof()`
- **Digit Manipulation**: `pln()`, `prn()`, `pfn()`, `arm()`, `fact()`, `facto()`, `spy()`
- **Geometric Area Calculations**: `ar()`, `as()`, `at()`, `ac()`

### Memory Management
Dynamic memory allocation is used for matrix operations to handle matrices of varying dimensions efficiently. Memory is deallocated after use to prevent memory leaks.

---

## Example Execution

### Addition
```bash
----------------------
Developed by:- @UdaykaCode
----------------------
1. Addition
Enter Your Choice : 1
Enter : 5
      +     
Enter : 3
The Addition is : 8.00
```

### Matrix Addition
```bash
Enter the number of rows: 2
Enter the number of columns: 2
Enter elements of the first matrix:
matrix1[0][0]: 1
matrix1[0][1]: 2
matrix1[1][0]: 3
matrix1[1][1]: 4
Enter elements of the second matrix:
matrix2[0][0]: 5
matrix2[0][1]: 6
matrix2[1][0]: 7
matrix2[1][1]: 8
The Matrix Addition is:
6     8
10    12
```

---

## Known Issues
- The progam return to the main body on choosing `Back` options.
- The program terminates immediately on choosing `Exit` options.

---

## Future Enhancements
- Improve input validation to handle incorrect data types.
- Add more mathematical operations such as logarithms and trigonometric functions.

---

## Message
This program is developed by **@UdaykaCode**. You are free to use and modify it as needed.
Copyright 2025, the project authors. All rights reserved.

