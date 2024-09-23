# ft_printf

## Description

`ft_printf` is a re-implementation of the standard `printf` function in C. This project, developed at École 42, aims to build a versatile, flexible, and efficient function to handle formatted output. The `ft_printf` function supports various format specifiers and can handle characters, strings, integers, pointers, and more.

## Features

This library includes the following key features:

### Supported Format Specifiers:
- `%c`: Prints a single character.
- `%s`: Prints a string of characters.
- `%p`: Prints a pointer address.
- `%d` / `%i`: Prints a decimal (base 10) number.
- `%u`: Prints an unsigned decimal (base 10) number.
- `%x` / `%X`: Prints a number in hexadecimal (base 16), lowercase or uppercase.
- `%%`: Prints a percent sign.

## Compilation and Usage

You can compile the library using the provided `Makefile`. To generate the `libftprintf.a` library file, simply run:

```bash
make
```

This will produce the libftprintf.a static library, which you can include in your own C projects.

## Project Structure

- `src/`: Contains the source files (`.c` files) such as `ft_printf.c`, `ft_putnbr_base.c`, etc.
- `include/`: Contains the header file `ft_printf.h`.
- `Makefile`: Used for compiling the library and managing build targets.

## How to Use

Once compiled, include the `ft_printf.h` header in your project and link the `libftprintf.a` file during the compilation of your own code:

```c
#include "ft_printf.h"
```

Compile with your project using the static library:

```bash
gcc -Wall -Wextra -Werror -L. -lftprintf my_program.c -o my_program
```

## Author

Project developed by [Emin A.](https://github.com/emayia) as part of the École 42 curriculum.