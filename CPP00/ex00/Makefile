CC = g++
RM = rm -rf
CPPFLAGS = -g -Wall -Wextra -Werror -std=c++98
NAME = megaphone
SRC = megaphone.cpp
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