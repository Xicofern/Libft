*This project has been created as part of the 42 curriculum by jpimenta.*

# Libft

## Description

This Libft was made as part of the project for the 42 School.

The objective of this project was to create a C library containing reimplementations of standard C library 
functions, as well as additional utility functions.

This library helped me develop a better understanding of C, pointers, data manipulation and memory management.

## Project Structure

```
libft/
│
├── ft_isalpha.c
├── ft_isdigit.c
├── ft_isalnum.c
├── ft_isascii.c
├── ft_isprint.c
├── ft_strlen.c
├── ft_memset.c
├── ft_bzero.c
├── ft_memcpy.c
├── ft_memmove.c
├── ft_strlcpy.c
├── ft_strlcat.c
├── ft_toupper.c
├── ft_tolower.c
├── ft_strchr.c
├── ft_strrchr.c
├── ft_strncmp.c
├── ft_memchr.c
├── ft_memcmp.c
├── ft_strnstr.c
├── ft_atoi.c
│
├── ft_substr.c
├── ft_strjoin.c
├── ft_strtrim.c
├── ft_split.c
├── ft_itoa.c
├── ft_strmapi.c
├── ft_striteri.c
├── ft_putchar_fd.c
├── ft_putstr_fd.c
├── ft_putendl_fd.c
├── ft_putnbr_fd.c
├── ft_lstnew.c
├── ft_lstadd_front.c
├── ft_lstsize.c
├── ft_lstlast.c
├── ft_lstadd_back.c
├── ft_lstdelone.c
├── ft_lstclear.c
├── ft_lstiter.c
├── ft_lstmap.c
│
├── libft.h
├── Makefile
└── README.md
```

## Instructions

To use this library, all the source files must be in the same
directory as the libft.h and Makefile files.

To compile the library, run the following command in the terminal:

`make`

This compiles all the functions and creates the static library libft.a.

Any C program using this library must include the header file:

`#include "libft.h"`

To remove all object files, run:

`make clean`

To remove both the object files and the library, run:

`make fclean`

To recompile everything, run:

`make re`

To compile a program using this library, run:

`cc main.c -L. -lft`

## Functions

### First Part - Functions from standard C library

- ft_isalpha
- ft_isdigit
- ft_isalnum
- ft_isascii
- ft_isprint
- ft_strlen
- ft_memset
- ft_bzero
- ft_memcpy
- ft_memmove
- ft_strlcpy
- ft_strlcat
- ft_toupper
- ft_tolower
- ft_strchr
- ft_strrchr
- ft_strncmp
- ft_memchr
- ft_memcmp
- ft_strnstr
- ft_atoi

### Second Part - Functions developed additionally to the standard library

- ft_substr
- ft_strjoin
- ft_strtrim
- ft_split
- ft_itoa
- ft_strmapi
- ft_striteri
- ft_putchar_fd
- ft_putstr_fd
- ft_putendl_fd
- ft_putnbr_fd
- ft_lstnew
- ft_lstadd_front
- ft_lstsize
- ft_lstlast
- ft_lstadd_back
- ft_lstdelone
- ft_lstclear
- ft_lstiter
- ft_lstmap

## Resources

For the existing functions in the standard C library, I used the `man` command in the terminal, to access their respective manuals.
To have a deeper understanding of how each function works, I also used several websites such as
[stackoverflow](https://stackoverflow.com),
[w3school](https://www.w3schools.com/) and 
[opengroup](https://pubs.opengroup.org/).
AI tools, more specifically [chatGPT](https://chatgpt.com/), were also used to ask questions about errors which neither my peers or I
were able to solve, as well as to clarify specific questions about topics I struggled with such as linked lists.
