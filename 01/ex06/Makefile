# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/03 09:10:12 by jode-vri          #+#    #+#              #
#    Updated: 2022/01/03 09:10:13 by jode-vri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= KarenFilter
SRCSDIR		= .

SRCS		= main.cpp		\
			  Karen.cpp

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