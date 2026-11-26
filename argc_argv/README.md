# argc_argv

## Learning Objectives

This project introduces command-line arguments in C.

- **`argc`**: Counts the arguments passed to a program, including the program name.
- **`argv`**: An array containing the arguments as strings.
- **`argv[0]`**: Stores the program name.

### Main Function Prototypes

- `int main(void)` – Used when no command-line arguments are needed.
- `int main(int argc, char *argv[])` – Used when the program receives command-line arguments.

### Unused Parameters

- `(void)variable;` tells the compiler that a parameter is intentionally unused.
- `__attribute__((unused))` is another way to mark unused parameters.

This project helps understand how C programs receive and handle command-line arguments.
