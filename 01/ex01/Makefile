# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/03 09:07:37 by jode-vri          #+#    #+#              #
#    Updated: 2022/01/03 09:07:38 by jode-vri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Zombie
SRCSDIR		= ./

SRCS		=	main.cpp		\
				Zombie.cpp		\
				ZombieHorde.cpp

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