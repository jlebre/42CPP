CC = g++
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Meggy
SRC = main.cpp

all: $(NAME)

$(NAME):
	@$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:

fclean:
	@$(RM) $(NAME)
	echo "Meggy Removed!"

a:
	@make fclean
	@make
	@./Meggy

.PHONY: all clean fclean a
