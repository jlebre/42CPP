FILE_NAME = \
			Bureaucrat.cpp \
			AForm.cpp \
			PresidentialPardonForm.cpp \
			ShrubberyCreationForm.cpp \
			RobotomyRequestForm.cpp \
			main.cpp \

SRCS_DIR = srcs

SRCS = $(addprefix $(SRCS_DIR)/, $(FILE_NAME))

CXX = c++

INC = -I includes

CXXFLAGS = -Wall -Wextra -Werror $(INC) -std=c++98

RM = rm -f

NAME = moreForms

all: $(NAME)

$(OBJS_DIR)/%.o :	$(SRCS_DIR)/%.cpp
	@mkdir -p $(@D)
	@$(CXX) $(CXXFLAGS) -O3 -c $< -o $@

$(NAME): $(SRCS)
	@$(CXX) $(CXXFLAGS) $(SRCS) -o $(NAME)
	@echo -e '[0;32mmoreForms Compiled![0m'

clean:
	@$(RM) $(OBJS_DIR)

fclean: clean
	@$(RM) $(NAME)
	@echo -e '[0;31mmoreForms Removed![0m'

re:
	@make fclean
	@make

a:
	@make re
	@make clean
	@./moreForms

.PHONY: all clean fclean re a
