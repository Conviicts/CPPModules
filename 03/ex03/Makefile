# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/03 09:22:27 by jode-vri          #+#    #+#              #
#    Updated: 2022/01/03 09:22:28 by jode-vri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= DiamondTrap
SRCSDIR		= .

SRCS		=	main.cpp		\
				DiamondTrap.cpp	\
				ClapTrap.cpp	\
				ScavTrap.cpp	\
				FragTrap.cpp

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