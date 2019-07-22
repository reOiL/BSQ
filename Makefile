# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jwebber <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/21 12:27:26 by jwebber           #+#    #+#              #
#    Updated: 2019/07/22 08:00:19 by jwebber          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
SRC = main.c \
	  io_support.c \
	  ft/atoi.c \
	  ft/ft_realloc.c \
	  ft/put_char.c \
	  ft/put_str.c \
	  ft/str_len.c \
	  ft/strcpy.c

FLAGS = -Wall -Werror -Wextra
RM = /bin/rm -f

all:
	@gcc $(FLAGS) $(SRC) -o $(NAME)

clean:
	@$(RM) *.o

fclean: clean
	@$(RM) $(NAME)

re:	fclean all
