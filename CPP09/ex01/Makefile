FILE_NAME = \
	Span.cpp \
    main.cpp \

SRCS_DIR = srcs
OBJS_DIR = objs

SRCS = $(addprefix $(SRCS_DIR)/, $(FILE_NAME))
OBJS = $(patsubst $(SRCS_DIR)/%.cpp,$(OBJS_DIR)/%.o,$(SRCS))

CXX = c++
INC = -I includes
CXXFLAGS = -Wall -Wextra -Werror $(INC) -std=c++98
RM = rm -f
NAME = span

all: $(NAME)

$(OBJS_DIR)/%.o : $(SRCS_DIR)/%.cpp
	@mkdir -p $(@D)
	@$(CXX) $(CXXFLAGS) -O3 -c $< -o $@

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo -e '[0;32mspan Compiled![0m'

clean:
	@$(RM) -r $(OBJS_DIR) # Remove the object files directory

fclean: clean
	@$(RM) $(NAME)
	@echo -e '[0;31mspan Removed![0m'

a: $(NAME)
	@./$(NAME)

re: fclean all

.PHONY: all clean fclean re a
