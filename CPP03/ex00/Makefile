FILE_NAME = \
			ClapTrap.cpp \
			main.cpp \

SRCS_DIR = srcs

SRCS = $(addprefix $(SRCS_DIR)/, $(FILE_NAME))

CC = g++

INC = -I includes

CPPFLAGS = -Wall -Wextra -Werror $(INC) -std=c++98

RM = rm -f

NAME = clap_trap

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(CPPFLAGS) $(SRCS) -o $(NAME)
	@echo -e '[0;32mclap_trap Compiled![0m'

clean:
	@$(RM) $(OBJS_DIR)

fclean: clean
	@$(RM) $(NAME)
	@echo -e '[0;31mclap_trap Removed![0m'

re:
	@make fclean
	@make

a:
	@make re
	@make clean
	@./clap_trap

.PHONY: all clean fclean re a
