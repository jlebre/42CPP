SRCS = \
			ClapTrap.cpp \
			ScavTrap.cpp \
			main.cpp \

CC = g++

INC = -I includes

CPPFLAGS = -Wall -Wextra -Werror $(INC) -std=c++98

RM = rm -f

NAME = serena

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(CPPFLAGS) $(SRCS) -o $(NAME)
	@echo -e '[0;32mserena Compiled![0m'

clean:

fclean: clean
	@$(RM) $(NAME)
	@echo -e '[0;31mserena Removed![0m'

re:
	@make fclean
	@make

a:
	@make re
	@make clean
	@./serena

.PHONY: all clean fclean re a
