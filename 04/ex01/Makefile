NAME		= Animal
SRCSDIR		= .

SRCS		=	main.cpp		\
				Animal.cpp		\
				WrongAnimal.cpp	\
				Cat.cpp			\
				WrongCat.cpp	\
				Brain.cpp	\
				Dog.cpp

CC			= clang++
CFLAGS		= -Wall -Wextra -Werror -std=c++98 -fsanitize=address

all: $(NAME)

$(NAME): $(SRCSDIR)/$(SRCS)
	@$(CC) $(CFLAGS) -o $@ $^

clean:

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re