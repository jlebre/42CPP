FILE_NAME	=	main.c \

SRCS_DIR	=	srcs

SRCS		=	$(addprefix $(SRCS_DIR)/, $(FILE_NAME))

OBJS		=	$(subst $(SRCS_DIR), $(OBJS_DIR), $(SRCS:.c=.o))

OBJS_DIR	=	objs

MLX			=	mlx_linux/libmlx_Linux.a

NAME		=	bsp_vis

CC			=	cc

INC			=	-I includes -I mlx_linux

CFLAGS		=	-Wall -Wextra -Werror $(INC) -g # -fsanitize=address

RM			=	rm -rf

LIBS_FLAGS	= -Lmlx_linux -lmlx_Linux -L /usr/lib -lXext -lX11 -lm -lz

all:		$(NAME)

$(OBJS_DIR)/%.o :	$(SRCS_DIR)/%.c
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -O3 -c $< -o $@

$(NAME):	$(PRINTF) $(MLX) $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) $(LIBS_FLAGS) -o $(NAME)

$(MLX):
	@make -sC mlx_linux

clean:
	@$(RM) $(OBJS_DIR)
	@make clean -sC mlx_linux

fclean:		clean
	@$(RM) $(NAME)

a:
	@make re && make clean && ./bsp_vis

re:			fclean all

.PHONY: all clean fclean re a