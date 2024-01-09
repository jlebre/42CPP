FILE_NAME = \
			PmergeMe.cpp \
			main.cpp \

SRCS_DIR = srcs

SRCS = $(addprefix $(SRCS_DIR)/, $(FILE_NAME))

CXX = c++

INC = -I includes

CXXFLAGS = -Wall -Wextra -Werror $(INC) -std=c++98

RM = rm -f

NAME = PmergeMe

all: $(NAME)

$(OBJS_DIR)/%.o :	$(SRCS_DIR)/%.cpp
	@mkdir -p $(@D)
	@$(CXX) $(CXXFLAGS) -O3 -c $< -o $@

$(NAME): $(SRCS)
	@$(CXX) $(CXXFLAGS) $(SRCS) -o $(NAME)
	@echo -e '[0;32mPmergeMe Compiled![0m'

clean:
	@$(RM) $(OBJS_DIR)

fclean: clean
	@$(RM) $(NAME)
	@echo -e '[0;31mPmergeMe Removed![0m'

re:
	@make fclean
	@make

a:
	@make re
	@make clean
	@./PmergeMe

test:
	@make re
	@echo
	./PmergeMe 3 5 9 7 4
	@echo
	./PmergeMe 3 5 9 7 4 1 2 6 8 0
	@echo
	./PmergeMe `shuf -i 1-100000 -n 3000 | tr "\n" " "`
	@echo
	./PmergeMe "-1" "2"
	@echo
	./PmergeMe 0 5 6 -8 18
	@echo
	./PmergeMe 5 5 5 5 5 5
	@echo
	./PmergeMe "28" "396" "48" "5" "11"


.PHONY: all clean fclean re a test
