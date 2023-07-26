# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/17 12:11:52 by mabdelou          #+#    #+#              #
#    Updated: 2022/06/17 12:11:59 by mabdelou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -Wall -Wextra -Werror -std=c++98

RM = rm -f
NAME = phonebook
FILES = PhoneBook.cpp \
		Contact.cpp	  \
		ft_utilis.cpp \
		main.cpp

all:  $(NAME)

$(NAME): $(FILES)
	$(CC) $(FILES)  -o $(NAME)
	

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re bonus
