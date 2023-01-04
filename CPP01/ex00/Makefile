# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/04 20:28:41 by jlebre            #+#    #+#              #
#    Updated: 2023/01/04 20:31:07 by jlebre           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++
RM = rm -rf
CPPFLAGS = -g -Wall -Wextra -Werror -std=c++98
NAME = BraiiiiiiinnnzzzZ
SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(CPPFLAGS) -o $(NAME)

clean: 
	$(RM) $(OBJ)
	echo "\033[0;31m.o Files Removed!\033[0m"

fclean: clean
	$(RM) $(NAME)
	echo "\033[0;31mMegaphone Removed!\033[0m"

.PHONY: all clean fclean