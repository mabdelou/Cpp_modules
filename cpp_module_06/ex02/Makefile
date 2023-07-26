# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 11:08:54 by mabdelou          #+#    #+#              #
#    Updated: 2022/10/05 15:32:05 by mabdelou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -Wall -Wextra -Werror -std=c++98

RM = rm -f
NAME  = Identify
FILES = main.cpp		\
		Base.cpp		\
		A.cpp			\
		B.cpp			\
		C.cpp			
all:  $(NAME)

$(NAME): $(FILES)
	$(CC) $(FILES) -o $(NAME)
	

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re bonus
