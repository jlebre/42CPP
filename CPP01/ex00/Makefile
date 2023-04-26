# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/04 20:28:41 by jlebre            #+#    #+#              #
#    Updated: 2023/04/26 19:42:07 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++
RM = rm -rf
CPPFLAGS = -g -Wall -Wextra -Werror -std=c++98
NAME = BraiiiiiiinnnzzzZ
SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

all: $(NAME)

$(NAME): 
	@$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:

fclean: 
	@$(RM) $(NAME)
	echo "\033[0;31mBraiiiiiiinnnzzzZ Removed!\033[0m"

a:
	@make fclean
	@make
	@./BraiiiiiiinnnzzzZ

.PHONY: all clean fclean a