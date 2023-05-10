FILE_NAME = \
			hello.cpp \
			main.cpp \
			test.cpp \

SRCS_DIR = srcs

SRCS = $(addprefix $(SRCS_DIR)/, $(FILE_NAME))

OBJS = $(subst $(SRCS_DIR), $(OBJS_DIR), $(SRCS:.cpp=.o))

OBJS_DIR = objs

CC = g++

INC = -I includes

CPPFLAGS = -Wall -Wextra -Werror $(INC) -std=c++98

RM = rm -f

NAME = lourenço

all: $(NAME)

$(OBJS_DIR)/%.o :	$(SRCS_DIR)/%.cpp
	@mkdir -p $(@D)
	@$(CC) $(CPPFLAGS) -O3 -c $< -o $@

$(NAME):
	@$(CC) $(CPPFLAGS) $(SRCS) -o $(NAME)
	@echo -e '[0;32mlourenço Compiled![0m'

clean:
	@$(RM) $(OBJS_DIR)

fclean: clean
	@$(RM) $(NAME)
	@echo -e '[0;31mlourenço Removed![0m'

re:
	@make fclean
	@make

a:
	@make re
	@make clean
	@./lourenço

.PHONY: all clean fclean re a
