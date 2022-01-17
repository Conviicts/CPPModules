# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/03 09:09:53 by jode-vri          #+#    #+#              #
#    Updated: 2022/01/03 09:09:56 by jode-vri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Karen
SRCSDIR		= .

SRCS		= main.cpp		\
			  karen.cpp

CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98 -fsanitize=address

all: $(NAME)

$(NAME): $(SRCSDIR)/$(SRCS)
	@$(CC) $(CFLAGS) -o $@ $^

clean:

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re