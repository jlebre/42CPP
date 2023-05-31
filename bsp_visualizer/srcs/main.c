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
	vars()->range_h = vars()->max_h - vars()->min_h;
	vars()->range_w = vars()->max_w - vars()->min_w;
	vars()->height = vars()->range_h * 50 + 48;
	vars()->width = vars()->range_w * 50 + 48;
	vars()->screen = mlx_new_image(vars()->mlx, vars()->width, vars()->height);
}

void	set_range(char **argv)
{
	// Set Max Width
	vars()->max_w = atoi(argv[1]);
	if (atoi(argv[3]) > vars()->max_w)
		vars()->max_w = atoi(argv[3]);
	if (atoi(argv[5]) > vars()->max_w)
		vars()->max_w = atoi(argv[5]);
	if (atoi(argv[7]) > vars()->max_w)
		vars()->max_w = atoi(argv[7]);
	
	// Set Max Height
	vars()->max_h = atoi(argv[2]);
	if (atoi(argv[4]) > vars()->max_h)
		vars()->max_h = atoi(argv[4]);
	if (atoi(argv[6]) > vars()->max_h)
		vars()->max_h = atoi(argv[6]);
	if (atoi(argv[8]) > vars()->max_h)
		vars()->max_h = atoi(argv[8]);
	
	// Set Min Width
	vars()->min_w = atoi(argv[1]);
	if (atoi(argv[3]) < vars()->min_w)
		vars()->min_w = atoi(argv[3]);
	if (atoi(argv[5]) < vars()->min_w)
		vars()->min_w = atoi(argv[5]);
	if (atoi(argv[7]) < vars()->min_w)
		vars()->min_w = atoi(argv[7]);
	
	// Set Min Height
	vars()->min_h = atoi(argv[2]);
	if (atoi(argv[4]) < vars()->min_h)
		vars()->min_h = atoi(argv[4]);
	if (atoi(argv[6]) < vars()->min_h)
		vars()->min_h = atoi(argv[6]);
	if (atoi(argv[8]) < vars()->min_h)
		vars()->min_h = atoi(argv[8]);
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
	set_range(argv);
}

void	my_mlx_pixel_put(t_global *vars, int x, int y, int color)
{
	char	*dst;

	dst = vars->screen->data + (y * vars->screen->size_line
			+ x * (vars->screen->bpp / 8));
	*(unsigned int *)dst = color;
}

void	draw_square(t_global *vars, int x, int y, int color)
{
	int		temp;
	int		new_x;
	int		new_y;

	temp = x;
	new_x = x + 16;
	new_y = y + 16;
	while (y < new_y && y < vars->height)
	{
		x = temp;
		while (x < new_x && x < vars->width)
		{
			my_mlx_pixel_put(vars, x, y, color);
			x++;
		}
		y++;
	}
}

float   sign( t_point p1, t_point p2, t_point p3 )
{
    return (p1.x - p3.x) * (p2.y - p3.y) - (p2.x - p3.x) * (p1.y - p3.y);
}

void	bsp( t_point pt, t_point a, t_point b, t_point c )
{
    float   d1, d2, d3;
    int    has_neg, has_pos;

    d1 = sign(pt, a, b);
    d2 = sign(pt, b, c);
    d3 = sign(pt, c, a);

    has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

    vars()->check = !(has_neg && has_pos);
}

void	draw()
{
	draw_square(vars(), (vars()->V1.x - vars()->min_w) * 50 + 16, ((vars()->height - (vars()->V1.y - vars()->min_h) * 50 - 32)), 0xFFFFFF);
	draw_square(vars(), (vars()->V2.x - vars()->min_w) * 50 + 16, ((vars()->height - (vars()->V2.y - vars()->min_h) * 50 - 32)), 0xFFFFFF);
	draw_square(vars(), (vars()->V3.x - vars()->min_w) * 50 + 16, ((vars()->height - (vars()->V3.y - vars()->min_h) * 50 - 32)), 0xFFFFFF);
	if (vars()->check)
		draw_square(vars(), (vars()->PT.x - vars()->min_w) * 50 + 16, vars()->height - (vars()->PT.y - vars()->min_h) * 50 - 32, 0x00FF00);
	else
		draw_square(vars(), (vars()->PT.x - vars()->min_w) * 50 + 16, vars()->height - (vars()->PT.y - vars()->min_h) * 50 - 32, 0xFF0000);
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
	bsp(vars()->PT, vars()->V1, vars()->V2, vars()->V3);
	draw();
	mlx_hook(vars()->mlx_win, 17, 1L << 17, &ft_exit, vars());
	mlx_loop(vars()->mlx);
}
