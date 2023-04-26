# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/04 20:28:41 by jlebre            #+#    #+#              #
#    Updated: 2023/04/26 03:46:34 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++
RM = rm -rf
CPPFLAGS = -g -Wall -Wextra -Werror -std=c++98
NAME = MoarBrainz
SRC = main.cpp Zombie.cpp ZombieHorde.cpp

all: $(NAME)

$(NAME): 
	@$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:

fclean: 
	@$(RM) $(NAME)
	echo "\033[0;31mMoarBrainz Removed!\033[0m"

a:
	@make fclean
	@make
	@./MoarBrainz

.PHONY: all clean fclean a