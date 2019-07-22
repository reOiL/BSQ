# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jraelene <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/22 15:26:19 by jraelene          #+#    #+#              #
#    Updated: 2019/07/22 15:35:32 by jraelene         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft/atoi.c \
	  ft/ft_realloc.c \
	  ft/put_char.c \
	  ft/put_str.c \
	  ft/str_len.c \
	  ft/strcpy.c

OBJ = atoi.o \
	  ft_realloc.o \
	  put_char.o \
	  put_str.o \
	  str_len.o \
	  strcpy.o

all:
	@gcc -Wall -Wextra -Werror -c $(SRC)
	@ar rc $(NAME) $(OBJ)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)
