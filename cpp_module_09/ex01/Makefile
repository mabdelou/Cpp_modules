# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/27 14:35:45 by mabdelou          #+#    #+#              #
#    Updated: 2023/05/02 08:46:25 by mabdelou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -Wall -Werror -Wextra -std=c++98
NAME = RPN
CPPFILES = RPN.cpp main.cpp
all:
	$(CC) $(CPPFILES) -o $(NAME)
clean:
	rm -rf $(NAME)
	
fclean: clean

re: fclean all

.PHONY: all clean fclean re