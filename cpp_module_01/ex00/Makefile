CC = c++ -Wall -Wextra -Werror -std=c++98

RM = rm -f
NAME  = zombie
FILES = Zombie.cpp 		\
		randomChump.cpp	\
		newZombie.cpp	\
		main.cpp

all:  $(NAME)

$(NAME): $(FILES)
	$(CC) $(FILES)  -o $(NAME)
	

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re bonus
