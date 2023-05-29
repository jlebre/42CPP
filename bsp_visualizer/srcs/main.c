#include <bsp_vis.h>

t_global	*vars(void)
{
	static t_global	data;

	return (&data);
}

void	render()
{
	(void)vars;
	printf("Hello\n");
}

int	ft_exit(t_global *vars)
{
	if (vars->mlx_win)
		mlx_destroy_window(vars->mlx, vars->mlx_win);
	printf("Exited sucessfully!\n");
	exit(0);
}

void	init()
{
	vars()->mlx = mlx_init();
	vars()->height = 512;
	vars()->width = 640;
	vars()->screen = mlx_new_image(vars()->mlx, vars()->width, vars()->height);
}

void	parse(char **argv)
{
	vars()->V1.x = atoi(argv[1]);
	vars()->V1.y = atoi(argv[2]);
	vars()->V2.x = atoi(argv[3]);
	vars()->V2.y = atoi(argv[4]);
	vars()->V3.x = atoi(argv[5]);
	vars()->V3.y = atoi(argv[6]);
	vars()->PT.x = atoi(argv[7]);
	vars()->PT.y = atoi(argv[8]);
}

void	my_mlx_pixel_put(t_global *vars, int x, int y, int color)
{
	char	*dst;

	dst = vars->screen->data + (y * vars->screen->size_line
			+ x * (vars->screen->bpp / 8));
	*(unsigned int *)dst = color;
}

void	draw()
{
	my_mlx_pixel_put(vars(), vars()->V1.x * 20, vars()->V1.y * 20, 0xFF0000);
	my_mlx_pixel_put(vars(), vars()->V2.x * 20, vars()->V2.y * 20, 0xFF0000);
	my_mlx_pixel_put(vars(), vars()->V3.x * 20, vars()->V3.y * 20, 0xFF0000);
	my_mlx_pixel_put(vars(), vars()->PT.x * 20, vars()->PT.y * 20, 0x00FF00);
	mlx_put_image_to_window(vars()->mlx, vars()->mlx_win, vars()->screen, 0, 0);
}

int	main(int argc, char **argv)
{
	if (argc != 9)
	{
		printf("Wrong number of arguments\n");
		ft_exit(vars());
	}
	parse(argv);
	init();
	vars()->mlx_win = mlx_new_window(vars()->mlx, vars()->width, vars()->height, "bsp_vis");
	if (!vars()->mlx_win)
		printf("Failed malloc on mlx_new_window");
	draw();
	printf("test\n");
	mlx_hook(vars()->mlx_win, 17, 1L << 17, &ft_exit, vars());
	mlx_loop(vars()->mlx);
}
