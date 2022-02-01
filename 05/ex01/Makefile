NAME		= Bureaucrat
SRCSDIR		= .

SRCS		=	main.cpp		\
				Bureaucrat.cpp	\
				Form.cpp

CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98 #-fsanitize=address

all: $(NAME)

$(NAME): $(SRCSDIR)/$(SRCS)
	@$(CC) $(CFLAGS) -o $@ $^

clean:

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re