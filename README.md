# 42SP_Libft
My very first own library regrouping some usual functions in C

## Table of contents
* [Introduction](#introduction)
* [Technologies](#technologies)
* [Functions](#functions)
	* [Part 1](#part_1)
	* [Part 2](#part_2)
	* [Bonus](#bonus)
	* [Extra](#extra)
* [Usage](#usage)

## Introduction
 This project aims to code a C library regrouping usual functions that you’ll be allowed to use in all your other projects.
	
## Technologies
Project is created with:
* C

## Functions
This project was divided into three parts and I added a new one for extra functions that I will formulate on my own as I advance in the 42SP course.

### Part_1
In this part, I had to re-code some `libc` functions as defined in their `man`

#### Memory
|                                     Name                                    |               Description              |
|:---------------------------------------------------------------------------:|:--------------------------------------:|
|  [memset](https://github.com/JKAmadio/42sp_00_libft/blob/main/ft_memset.c)  | set memory areas to specific value     |
|   [b_zero](https://github.com/JKAmadio/42sp_00_libft/blob/main/ft_bzero.c)  | write zero-valued bytes                |
|  [memcpy](https://github.com/JKAmadio/42sp_00_libft/blob/main/ft_memcpy.c)  | copy memory areas                      |
| [memccpy](https://github.com/JKAmadio/42sp_00_libft/blob/main/ft_memccpy.c) | copy memory area until character found |
| [memmove](https://github.com/JKAmadio/42sp_00_libft/blob/main/ft_memmove.c) | copy memory areas, accept overlap      |
|  [memchr](https://github.com/JKAmadio/42sp_00_libft/blob/main/ft_memchr.c)  | scan memory for a character            |
|  [memcmp](https://github.com/JKAmadio/42sp_00_libft/blob/main/ft_memcmp.c)  | compare memory areas                   |

#### String
|                                     Name                                    |                  Description                  |
|:---------------------------------------------------------------------------:|:---------------------------------------------:|
|  [strlen](https://github.com/JKAmadio/42sp_00_libft/blob/main/ft_strlen.c)  | calculate len of string                       |
| [strlcpy](https://github.com/JKAmadio/42sp_00_libft/blob/main/ft_strlcpy.c) | size-bounded string copy                      |
| [strlcat](https://github.com/JKAmadio/42sp_00_libft/blob/main/ft_strlcat.c) | size-bounded string concatenation             |
|  [strchr](https://github.com/JKAmadio/42sp_00_libft/blob/main/ft_strchr.c)  | scan string for a character                   |
| [strrchr](https://github.com/JKAmadio/42sp_00_libft/blob/main/ft_strrchr.c) | scan string for last occurance of a character |
| [strnstr](https://github.com/JKAmadio/42sp_00_libft/blob/main/ft_strnstr.c) | locate a substring                            |
| [strncmp](https://github.com/JKAmadio/42sp_00_libft/blob/main/ft_strncmp.c) | size-bounded comparation of two strings       |
| [atoi](https://github.com/JKAmadio/42sp_00_libft/blob/main/ft_atoi.c)       | convert a string to integer                   |

#### Classification
|                                     Name                                    |                   Description                  |
|:---------------------------------------------------------------------------:|:----------------------------------------------:|
| [isalpha](https://github.com/JKAmadio/42sp_00_libft/blob/main/ft_isalpha.c) | classification routine: alphabetic character   |
| [isdigit](https://github.com/JKAmadio/42sp_00_libft/blob/main/ft_isdigit.c) | classification routine: number character       |
| [isalnum](https://github.com/JKAmadio/42sp_00_libft/blob/main/ft_isalnum.c) | classification routine: alphanumeric character |
| [isascii](https://github.com/JKAmadio/42sp_00_libft/blob/main/ft_isascii.c) | classification routine: ASCII character        |
| [isprint](https://github.com/JKAmadio/42sp_00_libft/blob/main/ft_isprint.c) | classification routine: printable character    |
| [toupper](https://github.com/JKAmadio/42sp_00_libft/blob/main/ft_toupper.c) | convert letter to uppercase                    |
| [tolower](https://github.com/JKAmadio/42sp_00_libft/blob/main/ft_tolower.c) | convert letter to lowercase                    |

#### Allocation
|                                    Name                                   |            Description           |
|:-------------------------------------------------------------------------:|:--------------------------------:|
| [calloc](https://github.com/JKAmadio/42sp_00_libft/blob/main/ft_calloc.c) | allocate and free dynamic memory |
| [strdup](https://github.com/JKAmadio/42sp_00_libft/blob/main/ft_strdup.c) | duplicate a string               |

### Part_2
In this part, I had to code some functions that are either not included in the `libc` or included in a different form

#### String
|                                     Name                                    |                                  Description                                 |
|:---------------------------------------------------------------------------:|:----------------------------------------------------------------------------:|
|  [substr](https://github.com/JKAmadio/42sp_00_libft/blob/main/ft_substr.c)  | create new string with the substring of a string                             |
| [strjoin](https://github.com/JKAmadio/42sp_00_libft/blob/main/ft_strjoin.c) | concatenate two string into a new one                                        |
| [strtrim](https://github.com/JKAmadio/42sp_00_libft/blob/main/ft_strtrim.c) | create new string with a set of characters removed from beginning and end    |
| [split](https://github.com/JKAmadio/42sp_00_libft/blob/main/ft_split.c)     | split string into an array of strings                                        |
| [itoa](https://github.com/JKAmadio/42sp_00_libft/blob/main/ft_itoa.c)       | convert integer to string                                                    |
| [strmapi](https://github.com/JKAmadio/42sp_00_libft/blob/main/ft_strmapi.c) | create new string from application of function to each character of a string |

#### Output
|                                        Name                                       |                               Description                              |
|:---------------------------------------------------------------------------------:|:----------------------------------------------------------------------:|
| [putchar_fd](https://github.com/JKAmadio/42sp_00_libft/blob/main/ft_putchar_fd.c) | output a character to the given file descriptor                        |
|  [putstr_fd](https://github.com/JKAmadio/42sp_00_libft/blob/main/ft_putstr_fd.c)  | output a string to the given file descriptor                           |
| [putendl_fd](https://github.com/JKAmadio/42sp_00_libft/blob/main/ft_putendl_fd.c) | output a character to the given file descriptor, followed by a newline |
| [putnbr_fd](https://github.com/JKAmadio/42sp_00_libft/blob/main/ft_putnbr_fd.c)   | output an integer to the given file descriptor                         |

### Bonus
In this part, I had to code some important functions for the manipulation of linked lists. 

|                                          Name                                         |                                Description                                |
|:-------------------------------------------------------------------------------------:|:-------------------------------------------------------------------------:|
|       [lstnew](https://github.com/JKAmadio/42sp_00_libft/blob/main/ft_lstnew.c)       | create new list                                                           |
| [lstadd_front](https://github.com/JKAmadio/42sp_00_libft/blob/main/ft_lstadd_front.c) | add new element to the beginning of list                                  |
| [lstsize](https://github.com/JKAmadio/42sp_00_libft/blob/main/ft_lstsize.c)           | count the elements of a list                                              |
| [lstlast](https://github.com/JKAmadio/42sp_00_libft/blob/main/ft_lstlast.c)           | finds the last element of list                                            |
| [lstadd_back](https://github.com/JKAmadio/42sp_00_libft/blob/main/ft_lstadd_back.c)   | add new element to the end of list                                        |
| [lstdelone](https://github.com/JKAmadio/42sp_00_libft/blob/main/ft_lstdelone.c)       | delete a specific element of list                                         |
| [lstclear](https://github.com/JKAmadio/42sp_00_libft/blob/main/ft_lstclear.c)         | delete sequence of element of list                                        |
| [lstiter](https://github.com/JKAmadio/42sp_00_libft/blob/main/ft_lstiter.c)           | iterates the list and applies the function to the content of each element |
| [lstmap](https://github.com/JKAmadio/42sp_00_libft/blob/main/ft_lstmap.c)             | apply function to content of all list's elements into new list            |

### Extra
In construction...

## Usage
Besides the function's files, this repository contains a `libft.h` file and a `Makefile` so that you can compile all the functions and use them in your project. To generate a `libft.a` file one of the commands bellow:
```
// Part 1 and Part 2 functions only
make

// all functions included
make bonus
```
and then compile your project with this file added to your compile command, such as:
```
gcc ~/path/to/your/project ~/path/to/your/libft.a
```
to keep your folder clean you may use one of the commands bellow:
```
// remove only the .o files
clean

// remove the .o files and the .a file
fclean
```
