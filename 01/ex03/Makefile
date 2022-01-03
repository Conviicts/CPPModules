NAME		= Human
SRCSDIR		= ./

SRCS		=	main.cpp		\
				Weapon.cpp		\
				HumanA.cpp		\
				HumanB.cpp		\

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