# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jwebber <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/21 12:27:26 by jwebber           #+#    #+#              #
#    Updated: 2019/07/21 12:58:45 by jwebber          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
SRC = main.c \
	  io_support.c

FLAGS = -Wall -Werror -Wextra
RM = /bin/rm -f

all:
	@gcc $(FLAGS) $(SRC) -o $(NAME)

clean:
	@$(RM) *.o

fclean: clean
	@$(RM) $(NAME)

re:	fclean all
