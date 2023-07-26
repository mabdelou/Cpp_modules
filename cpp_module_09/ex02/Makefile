# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/27 14:35:45 by mabdelou          #+#    #+#              #
#    Updated: 2023/04/09 13:55:15 by mabdelou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -Wall -Werror -Wextra -std=c++98
NAME = PmergeMe
CPPFILES = PmergeMe.cpp main.cpp
all:
	$(CC) $(CPPFILES) -o $(NAME)
clean:
	rm -rf $(NAME)
	
fclean: clean

re: fclean all

.PHONY: all clean fclean re