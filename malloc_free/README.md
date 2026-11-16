# C - malloc, free

## Description

This project focuses on dynamic memory allocation in C and introduces the use of `malloc()` and `free()`.

## Learning Objectives

- **Automatic allocation:** Memory is allocated automatically when a variable is declared and is released when its scope ends.
- **Dynamic allocation:** Memory is requested manually while the program is running, giving the programmer control over its size and lifetime.
- **malloc():** Allocates a requested amount of memory and returns a pointer to the beginning of that memory. The allocated memory is not automatically initialized.
- **free():** Releases memory previously allocated with `malloc()` when it is no longer needed.
- **Why use malloc():** It allows programs to allocate memory at runtime when the required size is not known in advance.
- **Memory leaks:** Occur when dynamically allocated memory is no longer needed but is not released using `free()`.
- **Valgrind:** A tool used to detect memory leaks and memory management errors in C programs.

## Requirements

All C files are compiled using:

`gcc -Wall -Werror -Wextra -pedantic -std=gnu89`

The code follows the Betty coding and documentation style.
