# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jwebber <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/21 12:27:26 by jwebber           #+#    #+#              #
#    Updated: 2019/07/24 08:19:06 by jwebber          ###   ########.fr        #
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
	  ft/ft_max.c \
	  list/ft_create_elem.c \
	  list/ft_list_at.c \
	  list/ft_list_clear.c \
	  list/ft_list_push_back.c \
	  list/ft_list_push_front.c \
	  list/ft_list_size.c \
	  list/ft_split.c \
	  brains_2.c \
	  support.c

OBJ = 	main.o \
	 	io_support.o \
	 	brains.o \
	 	ft/atoi.o \
	 	ft/ft_realloc.o \
	 	ft/put_char.o \
	 	ft/put_str.o \
	 	ft/str_len.o \
	 	ft/strcpy.o \
	 	ft/ft_strdup.o \
		ft/ft_max.o \
	 	list/ft_create_elem.o \
	 	list/ft_list_at.o \
	 	list/ft_list_clear.o \
	 	list/ft_list_push_back.o \
	 	list/ft_list_push_front.o \
	 	list/ft_list_size.o \
	 	list/ft_split.o \
	 	brains_2.o \
		support.o

FLAGS = -Wall -Werror -Wextra
RM = /bin/rm -f

all: $(NAME)

$(NAME): $(OBJ)
	gcc $(SRC) -o $(NAME) $(FLAGS)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re:	fclean all
