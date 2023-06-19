<div align = center>

# Libft: Create you own C library.

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

libft is a project where we learn to recriate some of the standard functions in C language.

## The project:

### Functions from `<ctype.h>`

- [`ft_isalpha`](src/ft_isalpha.c)	- checks  for  an  alphabetic  character
- [`ft_isdigit`](src/ft_isdigit.c)	- checks for a digit (0 through 9).
- [`ft_isalnum`](src/ft_isalnum.c)	- checks for an alphanumeric character
- [`ft_isascii`](src/ft_isascii.c)	- checks whether c fits into the ASCII character set
- [`ft_isprint`](src/ft_isprint.c)	- checks for any printable character
- [`ft_toupper`](src/ft_toupper.c)	- convert char to uppercase
- [`ft_tolower`](src/ft_tolower.c)	- convert char to lowercase

### Functions from `<string.h>`

- [`ft_memset`](src/ft_memset.c)	- fill memory with a constant byte
- [`ft_strlen`](src/ft_strlen.c)	- calculate the length of a string
- [`ft_bzero`](src/ft_bzero.c)	- zero a byte string
- [`ft_memcpy`](src/ft_memcpy.c)	- copy memory area
- [`ft_memmove`](src/ft_memmove.c)	- copy memory area
- [`ft_strlcpy`](src/ft_strlcpy.c)	- copy string to an specific size
- [`ft_strlcat`](src/ft_strlcat.c)	- concatenate string to an specific size
- [`ft_strchr`](src/ft_strchr.c)	- locate character in string
- [`ft_strrchr`](src/ft_strrchr.c)	- locate character in string
- [`ft_strncmp`](src/ft_strncmp.c)	- compare two strings
- [`ft_memchr`](src/ft_memchr.c)	- scan memory for a character
- [`ft_memcmp`](src/ft_memcmp.c)	- compare memory areas
- [`ft_strnstr`](src/ft_strnstr.c)	- locate a substring in a string
- [`ft_strdup`](src/ft_strdup.c)	- creates a dupplicate for the string passed as parameter

### Functions from `<stdlib.h>`
- [`ft_atoi`](src/ft_atoi.c)	- convert a string to an integer
- [`ft_calloc`](src/ft_calloc.c)	- allocates memory and sets its bytes' values to 0

### Non-standard functions
- [`ft_substr`](src/ft_substr.c)	- returns a substring from a string
- [`ft_strjoin`](src/ft_strjoin.c)	- concatenates two strings
- [`ft_strtrim`](src/ft_strtrim.c)	- trims the beginning and end of string with specific set of chars
- [`ft_split`](src/ft_split.c)	- splits a string using a char as parameter
- [`ft_itoa`](src/ft_itoa.c)	- converts a number into a string
- [`ft_strmapi`](src/ft_strmapi.c)	- applies a function to each character of a string
- [`ft_striteri`](src/ft_striteri.c)	- applies a function to each character of a string
- [`ft_putchar_fd`](src/ft_putchar_fd.c)	- output a char to a file descriptor
- [`ft_putstr_fd`](src/ft_putstr_fd.c)	- output a string to a file descriptor
- [`ft_putendl_fd`](src/ft_putendl_fd.c)	- output a string to a file descriptor, followed by a new line
- [`ft_putnbr_fd`](src/ft_putnbr_fd.c)	- output a number to a file descriptor

### Linked list functions (Libft's Project Bonus Part)

- [`ft_lstnew`](src/ft_lstnew_bonus.c)	- creates a new list element
- [`ft_lstadd_front`](src/ft_lstadd_front_bonus.c)	- adds an element at the beginning of a list
- [`ft_lstsize`](src/ft_lstsize_bonus.c)	- counts the number of elements in a list
- [`ft_lstlast`](src/ft_lstlast_bonus.c)	- returns the last element of the list
- [`ft_lstadd_back`](src/ft_lstadd_back_bonus.c)	- adds an element at the end of a list
- [`ft_lstclear`](src/ft_lstclear_bonus.c)	- deletes and free list
- [`ft_lstiter`](src/ft_lstiter_bonus.c)	- applies a function to each element of a list
- [`ft_lstmap`](src/ft_lstmap_bonus.c)	- applies a function to each element of a list

## How to execute:

First, clone this repository and `cd` into it:

```zsh
$ git clone https://github.com/mendes-jv/libft; cd libft/src
```

Compile the library with:

```zsh
$ make
```

or

```sh
make bonus
```

Now you have a file called `libft.a`, use any function of the libft and compile you code with the archive.   

```sh
[gcc | cc | clang] [flags] main.c libft/src/libft.a
```
