# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/04 20:28:04 by jlebre            #+#    #+#              #
#    Updated: 2023/04/25 17:19:02 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++
RM = rm -rf
CPPFLAGS = -g -Wall -Wextra -Werror -std=c++98
NAME = Account
SRC = Account.cpp tests.cpp

all: $(NAME)

$(NAME):
	@$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:

fclean:
	@$(RM) $(NAME)
	echo "\033[0;31mMegaphone Removed!\033[0m"

.PHONY: all clean fclean