# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jwebber <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/21 12:27:26 by jwebber           #+#    #+#              #
#    Updated: 2019/07/23 08:13:56 by jwebber          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
SRC = main.c \
	  io_support.c \
	  brains.c \
	  ft/atoi.c \
	  ft/ft_realloc.c \
	  ft/put_char.c \
	  ft/put_str.c \
	  ft/str_len.c \
	  ft/strcpy.c \
	  ft/ft_strdup.c \
	  list/ft_create_elem.c \
	  list/ft_list_at.c \
	  list/ft_list_clear.c \
	  list/ft_list_push_back.c \
	  list/ft_list_push_front.c \
	  list/ft_list_size.c \
	  list/ft_split.c

FLAGS = -Wall -Werror -Wextra
RM = /bin/rm -f

all:
	@gcc $(FLAGS) $(SRC) -o $(NAME)

clean:
	@$(RM) *.o

fclean: clean
	@$(RM) $(NAME)

re:	fclean all
