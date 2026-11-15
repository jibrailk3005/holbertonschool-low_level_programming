# Simple Calculator in C

## Project Description

This project is a simple calculator written in C. It allows users to perform four basic arithmetic operations:

- Addition
- Subtraction
- Multiplication
- Division

The program uses a menu where users can select an operation, enter two numbers and get the result. It also handles division by zero, invalid menu choices and allows users to exit the calculator.

## Compilation and Execution

To compile the program, I used:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator
```

To run the program:

```bash
./calculator
```

## My Learning Approach

For learning purposes, I initially decided to write the program using simple logic, even if that meant repeating some sections of code.

I used individual `if` statements for each operation and a `while` loop to keep the calculator running until the user selected 0 to quit.

My main objective was to understand how each operation worked before trying to improve the structure of my code.

## Testing and Improving My Code

After implementing the calculator, I compiled and ran the program using GCC. I tested each operation with different numbers and scenarios, including decimal numbers, negative results, division by zero, invalid menu choices and exiting the program.

Once I was happy with the basic functionality, I challenged myself to reduce code duplication while keeping my original logic as much as possible.

Some of the changes and problems I encountered included:

- Creating a `display_menu()` function to separate the menu display logic from `main()`.
- Exploring how to display the calculation result in one place instead of repeating `printf()` statements.
- Initially using `if (choice > 0 && choice <= 4)` to control result printing. However, I realised this was not sufficient because a division by zero could still cause an old result to be displayed. I introduced an integer variable called `calculated` to track whether an operation was successfully completed.
- When implementing division, I initially performed the calculation before checking whether the divisor was zero. This caused the program to display `inf` before showing the division-by-zero error. I corrected this by using `if` and `else`, checking whether the divisor was zero first and only performing the division when it was not zero.

After making these changes, I compiled and tested the program again using different scenarios to make sure everything was still working correctly.

## Numeric Behaviour

The calculator uses the `double` data type, which allows users to enter decimal numbers and perform calculations with decimal results.

## Known Limitations

- The program does not currently handle non-numeric input. For example, accidentally entering the letter `o` instead of the number `0` can cause `scanf()` to fail and the program to get stuck in an infinite loop.
- Input validation could be improved to handle unexpected characters and prevent this issue.

## Future Improvements

- Improve input validation to handle non-numeric characters.
- Explore using pointers to better understand memory management and how they can help organise the code.
- Continue reducing code duplication by using separate functions for the different calculations.

## What I Learned

Through this project, I practised variables, data types, loops, conditional statements, logical operators, functions, arithmetic operations, compiling and debugging.

My main takeaway was that it is important to understand the basic logic first, get the program working, and then look for ways to improve the code. I also learned that a working program can still have areas that need improvement.

