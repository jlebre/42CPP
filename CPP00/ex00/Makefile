# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/04 20:27:14 by jlebre            #+#    #+#              #
#    Updated: 2023/05/04 18:09:48 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++
RM = rm -rf
CPPFLAGS = -g -Wall -Wextra -Werror -std=c++98
NAME = megaphone
SRC = megaphone.cpp

all: $(NAME)

$(NAME): 
	@$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:

fclean:
	@$(RM) $(NAME)

.PHONY: all clean fclean