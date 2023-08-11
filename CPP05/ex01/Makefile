FILE_NAME = \
			Bureaucrat.cpp \
			Form.cpp \
			main.cpp \

SRCS_DIR = srcs

SRCS = $(addprefix $(SRCS_DIR)/, $(FILE_NAME))

CC = c++

INC = -I includes

CXXFLAGS = -Wall -Wextra -Werror $(INC) -std=c++98

RM = rm -f

NAME = bureaucrat

all: $(NAME)

$(OBJS_DIR)/%.o :	$(SRCS_DIR)/%.cpp
	@mkdir -p $(@D)
	@$(CC) $(CXXFLAGS) -O3 -c $< -o $@

$(NAME): $(SRCS)
	@$(CC) $(CXXFLAGS) $(SRCS) -o $(NAME)
	@echo -e '[0;32mbureaucrat Compiled![0m'

clean:
	@$(RM) $(OBJS_DIR)

fclean: clean
	@$(RM) $(NAME)
	@echo -e '[0;31mbureaucrat Removed![0m'

re:
	@make fclean
	@make

a:
	@make re
	@make clean
	@./bureaucrat

.PHONY: all clean fclean re a
