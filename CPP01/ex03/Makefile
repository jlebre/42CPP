FILE_NAME = \
			HumanA.cpp \
			HumanB.cpp \
			Weapon.cpp \
			main.cpp \

SRCS_DIR = srcs

SRCS = $(addprefix $(SRCS_DIR)/, $(FILE_NAME))

OBJS = $(subst $(SRCS_DIR), $(OBJS_DIR), $(SRCS:.cpp=.o))

OBJS_DIR = objs
CC = g++

RM = rm -f

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = unnecessary_violence

all: $(NAME)

$(OBJS_DIR)/%.o :	$(SRCS_DIR)/%.cpp
	@mkdir -p $(@D)
	@$(CC) $(CPPFLAGS) -O3 -c $< -o $@

$(NAME):
	@$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)
	echo -e 'unnecessary_violence Compiled!'

clean:
	@$(RM) $(OBJS_DIR)

fclean: clean
	@$(RM) $(NAME)
	echo -e 'unnecessary_violence Removed!'

re:
	@make fclean
	@make

a:
	@make re
	@make clean
	@./unnecessary_violence

.PHONY: all clean fclean re a
