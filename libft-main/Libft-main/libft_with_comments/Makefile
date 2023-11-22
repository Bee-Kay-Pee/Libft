# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rpercy <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/14 12:23:20 by rpercy            #+#    #+#              #
#    Updated: 2022/10/14 12:26:31 by rpercy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
/* A Makefile is used to compile your source files to the required output*/

/* the first section of this makefile is declaring 4 different variables.*/ 
NAME		= 	libft.a
/* */
CC 			=	gcc
/* CC is macro for the c compiler and here it is set to the 
* GNU Compiler Collection, or gcc */
CFLAGS = -Wall -Wextra -Werror -c
/* CFLAGS
RM = rm -f

SRCS		= 	ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memset.c \
				ft_strlen.c \
				ft_tolower.c \
				ft_toupper.c \
				ft_bzero.c \
				ft_strnstr.c \
				ft_strncmp.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strjoin.c \
				ft_atoi.c	\
				ft_strdup.c \
				ft_substr.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putnbr_fd.c \
				ft_putendl_fd.c \
				ft_calloc.c	\
				ft_split.c \
				ft_strtrim.c \
				ft_strmapi.c \
				ft_striteri.c \
				ft_itoa.c \
				
OBJS		=	$(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS)
	ar rcs $(NAME) $(OBJS)
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re
