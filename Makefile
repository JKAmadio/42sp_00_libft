# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/30 23:21:58 by jkahvedj          #+#    #+#              #
#    Updated: 2021/06/12 20:15:09 by jkahvedj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= gcc
CFLAGS		= -Wall -Werror -Wextra
NAME		= libft.a
RM			= rm -f
SRC_FILES	= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c\
			ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c\
			ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c\
			ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c\
			ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c\
			ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c\
			\
			ft_itoa.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
			ft_putstr_fd.c ft_strjoin.c ft_strmapi.c ft_strtrim.c\
			ft_split.c ft_substr.c

OBJ_FILES = $(SRC_FILES:.c=.o)

BONUS_FILES = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c\
			ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c\
			ft_lstnew.c ft_lstsize.c

OBJ_BONUS_FILES = $(BONUS_FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES)

$(OBJ_FILES):
	$(CC) $(CFLAGS) -c $(SRC_FILES)

bonus: $(OBJ_BONUS_FILES) $(OBJ_FILES) 
	ar rcs $(NAME) $(OBJ_BONUS_FILES) $(OBJ_FILES)

$(OBJ_BONUS_FILES):
	$(CC) $(CFLAGS) -c $(BONUS_FILES)

clean:
	$(RM) $(OBJ_FILES) $(OBJ_BONUS_FILES)

fclean: clean
	$(RM) $(NAME)

re: fclean all