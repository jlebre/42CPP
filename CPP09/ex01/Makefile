FILE_NAME = \
			RPN.cpp \
			main.cpp \

SRCS_DIR = srcs

SRCS = $(addprefix $(SRCS_DIR)/, $(FILE_NAME))

CXX = c++

INC = -I includes

CXXFLAGS = -Wall -Wextra -Werror $(INC) -std=c++98

RM = rm -f

NAME = RPN

all: $(NAME)

$(OBJS_DIR)/%.o :	$(SRCS_DIR)/%.cpp
	@mkdir -p $(@D)
	@$(CXX) $(CXXFLAGS) -O3 -c $< -o $@

$(NAME): $(SRCS)
	@$(CXX) $(CXXFLAGS) $(SRCS) -o $(NAME)
	@echo -e '[0;32mRPN Compiled![0m'

clean:
	@$(RM) $(OBJS_DIR)

fclean: clean
	@$(RM) $(NAME)
	@echo -e '[0;31mRPN Removed![0m'

re:
	@make fclean
	@make

a:
	@make re
	@make clean
	@./RPN

test:
	@make re
	@make clean
	@./RPN "8 9 * 9 - 9 - 9 - 4 - 1 +"
	@./RPN "7 7 * 7 -"
	@./RPN "1 2 * 2 / 2 * 2 4 - +"
	@./RPN "(1 + 1)"

.PHONY: all clean fclean re a test
