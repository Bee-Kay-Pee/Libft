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

/* the first section of this is defining constants and variables within the makefile 
that communicate to 'make' on how we want to compile these files '*/ 
NAME		= 	libft.a
/* Name of the library we are creating */

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
/* : This variable is used to define the command for removing files. 
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
/* SRCS are a list of our source files for the library.*/				

OBJS		=	$(SRCS:.c=.o)
/* Here we see our first $ where we can call upon our variables. 
* In this case we call upon all the data in the variable SRCS and add to a new
* variable called OBJS but for every time we have '.c' we want to replace with '.o'*/



/*the next section we have targets (before the :) and rules(after the :). 
all: $(NAME)
/*the default target which is dependent on the name*/

$(NAME):
	$(CC) $(CFLAGS) $(SRCS)
	ar rcs $(NAME) $(OBJS)
/* this rule here we are building the library. It compiles the source files
* into object files and creates the library using ar */

clean:
	$(RM) $(OBJS)
/* this is removing all the object files */

fclean: clean
	$(RM) $(NAME)
/* removing object files from the library*/

re: fclean all
/* executing clean build */

.PHONY: all clean fclean re
/* the targets 'all, clean, fclean & re' are not real files and should
* always be executed */
