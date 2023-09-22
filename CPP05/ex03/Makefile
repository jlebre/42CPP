FILE_NAME = \
			Bureaucrat.cpp \
			AForm.cpp \
			PresidentialPardonForm.cpp \
			ShrubberyCreationForm.cpp \
			RobotomyRequestForm.cpp \
			Intern.cpp \
			main.cpp \

SRCS_DIR = srcs

SRCS = $(addprefix $(SRCS_DIR)/, $(FILE_NAME))

CXX = c++

INC = -I includes

CXXFLAGS = -Wall -Wextra -Werror $(INC) -std=c++98

RM = rm -f

NAME = intern

all: $(NAME)

$(OBJS_DIR)/%.o :	$(SRCS_DIR)/%.cpp
	@mkdir -p $(@D)
	@$(CXX) $(CXXFLAGS) -O3 -c $< -o $@

$(NAME): $(SRCS)
	@$(CXX) $(CXXFLAGS) $(SRCS) -o $(NAME)
	@echo -e '[0;32mintern Compiled![0m'

clean:
	@$(RM) $(OBJS_DIR)

fclean: clean
	@$(RM) $(NAME)
	@echo -e '[0;31mintern Removed![0m'

re:
	@make fclean
	@make

a:
	@make re
	@make clean
	@./intern

.PHONY: all clean fclean re a
