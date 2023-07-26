# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/27 14:35:45 by mabdelou          #+#    #+#              #
#    Updated: 2023/03/27 15:36:24 by mabdelou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -Wall -Werror -Wextra -std=c++98
NAME = btc
CPPFILES = BitcoinExchange.cpp main.cpp
all:
	$(CC) $(CPPFILES) -o $(NAME)
clean:
	rm -rf $(NAME)
	
fclean: clean

re: fclean all

.PHONY: all clean fclean re