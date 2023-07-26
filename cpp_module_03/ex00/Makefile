# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/22 13:56:48 by mabdelou          #+#    #+#              #
#    Updated: 2022/09/10 13:20:59 by mabdelou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -Wall -Wextra -Werror -std=c++98

RM = rm -f
NAME  = ClapTrap
FILES = main.cpp	\
		ClapTrap.cpp

all:  $(NAME)

$(NAME): $(FILES)
	$(CC) $(FILES)  -o $(NAME)
	

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re bonus
