<div align = center>

# Libft: Create you own C library

[![Norminette and Build](https://github.com/mendes-jv/libft/actions/workflows/main.yml/badge.svg)](https://github.com/mendes-jv/libft/actions/workflows/main.yml)
![42 São Paulo](https://img.shields.io/badge/42-SP-1E2952)
![License](https://img.shields.io/github/license/mendes-jv/libft?color=dark-green)
![Code size in bytes](https://img.shields.io/github/languages/code-size/mendes-jv/libft?color=dark-green)
![Top language](https://img.shields.io/github/languages/top/mendes-jv/libft?color=dark-green)
![Last commit](https://img.shields.io/github/last-commit/mendes-jv/libft?color=dark-green)

</div>

## Index:

* [Grade](#grade)
* [Description](#description)
* [How to execute](#how-to-execute)

## Grade:

<div align = center>

![](https://game.42sp.org.br/static/assets/achievements/libftm.png)

[![jovicto2's 42 Libft Score](https://badge42.vercel.app/api/v2/clj244ax4006908l8zkjw830s/project/3081696)](https://github.com/JaeSeoKim/badge42)



</div>

## Description:

Libft is the first project at 42 programming school, and it consists on recreate some of the standard functions of the C language, in order to form our own library. The library can be used as a support in future school's projects, since it's not allowed to use the original functions. Once you finish the project, you can (and should) include more functions to Libft than previously asked.

## The project:

### Functions from `<ctype.h>`

- [`ft_isalpha`](sources/ft_isalpha.c)	- checks  for  an  alphabetic  character
- [`ft_isdigit`](sources/ft_isdigit.c)	- checks for a digit (0 through 9).
- [`ft_isalnum`](sources/ft_isalnum.c)	- checks for an alphanumeric character
- [`ft_isascii`](sources/ft_isascii.c)	- checks whether c fits into the ASCII character set
- [`ft_isprint`](sources/ft_isprint.c)	- checks for any printable character
- [`ft_toupper`](sources/ft_toupper.c)	- converts char to uppercase
- [`ft_tolower`](sources/ft_tolower.c)	- converts char to lowercase

### Functions from `<string.h>`

- [`ft_memset`](sources/ft_memset.c)	- fills memory with a constant byte
- [`ft_strlen`](sources/ft_strlen.c)	- calculates the length of a string
- [`ft_bzero`](sources/ft_bzero.c)	- zeroes a byte string
- [`ft_memcpy`](sources/ft_memcpy.c)	- copies memory area
- [`ft_memmove`](sources/ft_memmove.c)	- copies memory area
- [`ft_strlcpy`](sources/ft_strlcpy.c)	- copies string to an specific size
- [`ft_strlcat`](sources/ft_strlcat.c)	- concatenates string to an specific size
- [`ft_strchr`](sources/ft_strchr.c)	- locates character in string
- [`ft_strrchr`](sources/ft_strrchr.c)	- locates character in string
- [`ft_strncmp`](sources/ft_strncmp.c)	- compares two strings
- [`ft_memchr`](sources/ft_memchr.c)	- scans memory for a character
- [`ft_memcmp`](sources/ft_memcmp.c)	- compares memory areas
- [`ft_strnstr`](sources/ft_strnstr.c)	- locates a substring in a string
- [`ft_strdup`](sources/ft_strdup.c)	- creates a dupplicate for the string passed as parameter

### Functions from `<stdlib.h>`
- [`ft_atoi`](sources/ft_atoi.c)	- converts a string to an integer
- [`ft_calloc`](sources/ft_calloc.c)	- allocates memory and sets its bytes' values to 0

### Non-standard functions
- [`ft_substr`](sources/ft_substr.c)	- returns a substring from a string
- [`ft_strjoin`](sources/ft_strjoin.c)	- concatenates two strings
- [`ft_strtrim`](sources/ft_strtrim.c)	- trims the beginning and end of string with specific set of chars
- [`ft_split`](sources/ft_split.c)	- splits a string using a char as parameter
- [`ft_itoa`](sources/ft_itoa.c)	- converts a number into a string
- [`ft_strmapi`](sources/ft_strmapi.c)	- applies a function to each character of a string
- [`ft_striteri`](sources/ft_striteri.c)	- applies a function to each character of a string
- [`ft_putchar_fd`](sources/ft_putchar_fd.c)	- outputs a char to a file descriptor
- [`ft_putstr_fd`](sources/ft_putstr_fd.c)	- outputs a string to a file descriptor
- [`ft_putendl_fd`](sources/ft_putendl_fd.c)	- outputs a string to a file descriptor, followed by a new line
- [`ft_putnbr_fd`](sources/ft_putnbr_fd.c)	- outputs a number to a file descriptor

### Linked list functions (Libft's Project Bonus Part)

- [`ft_lstnew`](sources/ft_lstnew.c)	- creates a new list element
- [`ft_lstadd_front`](sources/ft_lstadd_front.c)	- adds an element at the beginning of a list
- [`ft_lstsize`](sources/ft_lstsize.c)	- counts the number of elements in a list
- [`ft_lstlast`](sources/ft_lstlast.c)	- returns the last element of the list
- [`ft_lstadd_back`](sources/ft_lstadd_back.c)	- adds an element at the end of a list
- [`ft_lstclear`](sources/ft_lstclear.c)	- deletes and free list
- [`ft_lstiter`](sources/ft_lstiter.c)	- applies a function to each element of a list
- [`ft_lstmap`](sources/ft_lstmap.c)	- applies a function to each element of a list

### Functions from others 42 projects

- [`get_next_line`](sources/ft_get_next_line.c)  - reads any valid file line by line until the end ([see the full project of get next line](https://github.com/mendes-jv/get-next-line))
- [`ft_printf`](sources/ft_printf.c)  - my version of printf functions from `stdio.h` ([see the full project of ft_printf](https://github.com/mendes-jv/ft-printf))

### Functions added after finishing the project

- [`ft_lputaddress_fd`](sources/ft_lputaddress_fd.c)	- outputs an address and returns its length
- [`ft_lputbin_fd`](sources/ft_lputbin_fd.c)	- outputs a number in binary representation and returns its length
- [`ft_lputdouble_fd`](sources/ft_lputdouble_fd.c)	- outputs a double number and returns its length
- [`ft_lputhexa_fd`](sources/ft_lputhexa_fd.c)	- outputs a number in hexadecimal representation and returns its length
- [`ft_lputnbr_fd`](sources/ft_lputnbr_fd.c)	- outputs a integer and returns its length
- [`ft_lputoctal_fd`](sources/ft_lputoctal_fd.c)	- outputs a number in octal representation and returns its length
- [`ft_lputstr_fd`](sources/ft_lputstr_fd.c)	- outputs a string and returns its length
- [`ft_itoa_base`](sources/ft_itoa_base.c)	- converts a number in a string and applies the number system specified
- [`ft_itoa_hex`](sources/ft_itoa_hex.c)	- converts a number in a string and converts it to hexadecimal base
- [`ft_ptoa`](sources/ft_ptoa.c)	- converts an address in a string
- [`ft_ctoa`](sources/ft_ctoa.c)	- converts a single char in a string (char + '\0' termination)
- [`ft_check_string`](sources/ft_check_string.c)	- checks if a string is a null pointer and returns "(null)" if it is

## How to execute:

First, clone this repository and `cd` into it:

```zsh
git clone https://github.com/mendes-jv/libft && cd libft
```

Compile the library with:

```zsh
make
```

Now you have a file called `libft.a`, use any function of the libft and compile your code with the archive.   

```sh
[gcc | cc | clang] [flags] main.c libft.a && ./a.out
```
