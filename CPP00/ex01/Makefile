# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/04 20:27:43 by jlebre            #+#    #+#              #
#    Updated: 2023/05/04 18:01:07 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++
RM = rm -rf
CPPFLAGS = -g -Wall -Wextra -Werror -std=c++98
NAME = PhoneBook
SRC = main.cpp PhoneBook.cpp Contact.cpp

all: $(NAME)

$(NAME):
	@$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:

fclean:
	@$(RM) $(NAME)

a:
	@make fclean
	@make
	@./PhoneBook

.PHONY: all clean fclean a