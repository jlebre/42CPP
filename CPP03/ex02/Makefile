FILE_NAME = \
			ClapTrap.cpp \
			ScavTrap.cpp \
			FragTrap.cpp \
			main.cpp \

SRCS_DIR = srcs

SRCS = $(addprefix $(SRCS_DIR)/, $(FILE_NAME))

CC = g++

INC = -I includes

CPPFLAGS = -Wall -Wextra -Werror $(INC) -std=c++98

RM = rm -f

NAME = repetitive

all: $(NAME)

$(OBJS_DIR)/%.o :	$(SRCS_DIR)/%.cpp
	@mkdir -p $(@D)
	@$(CC) $(CPPFLAGS) -O3 -c $< -o $@

$(NAME): $(SRCS)
	@$(CC) $(CPPFLAGS) $(SRCS) -o $(NAME)
	@echo -e '[0;32mrepetitive Compiled![0m'

clean:
	@$(RM) $(OBJS_DIR)

fclean: clean
	@$(RM) $(NAME)
	@echo -e '[0;31mrepetitive Removed![0m'

re:
	@make fclean
	@make

a:
	@make re
	@make clean
	@./repetitive

.PHONY: all clean fclean re a
