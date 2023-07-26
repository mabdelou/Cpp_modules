# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 15:38:08 by mabdelou          #+#    #+#              #
#    Updated: 2022/10/12 16:58:02 by mabdelou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -Wall -Wextra -Werror -std=c++98

RM = rm -f
NAME  = bureaucrat
FILES = main.cpp		\
		Bureaucrat.cpp	\
		Form.cpp		\
		Intern.cpp		\
		PresidentialPardonForm.cpp	\
		ShrubberyCreationForm.cpp	\
		RobotomyRequestForm.cpp 

all:  $(NAME)

$(NAME): $(FILES)
	$(CC) $(FILES)  -o $(NAME)
	

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re bonus
