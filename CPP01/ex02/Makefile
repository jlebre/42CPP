CC = g++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = hi_this_is_brain
SRC = main.cpp

all: $(NAME)

$(NAME):
	@$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:

fclean:
	@$(RM) $(NAME)
	echo "hi_this_is_brain Removed!"

re:
	@make fclean
	@make

a:
	@make fclean
	@make
	@./hi_this_is_brain

.PHONY: all clean fclean re a
