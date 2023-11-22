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

/* the first section of this is defining constants within the makefile 
that communicate to 'make' on how we want to compile these files '*/ 
NAME		= 	libft.a
/* We are defining the variable NAME with the value libft.a */

CC 			=	gcc
/* CC is macro for the c compiler and here it is set to the GNU Compiler Collection, or gcc */

CFLAGS = -Wall -Wextra -Werror -c
/* CFLAGS is a list of flags to pass the compilation command.
* -Wall: Enable most warning messages.
* -Wextra: Enable some extra warning messages not covered by -Wall.
* -Werror: Treat warnings as errors, causing the compilation to fail if there are any warnings.
* -c: Compile the source files into object files but do not link. 
* This is needed when creating a library. */

RM = rm -f
*/ : This variable is used to define the command for removing files. 
* In this case, it's using the rm command with the -f flag to force the removal 
* of files without prompting. *\

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
