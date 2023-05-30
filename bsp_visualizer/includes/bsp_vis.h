#ifndef BSP_VIS_H
# define BSP_VIS_H

# include <stdlib.h>
# include <stdio.h>
# include <math.h>
# include <mlx.h>
# include "mlx_int.h"

typedef struct s_point	t_point;
typedef struct s_global	t_global;

struct s_point
{
	int	x;
	int	y;
};

struct s_global
{
	void	*mlx;
	void	*mlx_win;
	t_img	*screen;
	int		width;
	int		height;
	int		max_h;
	int		max_w;
	int		range_h;
	int		range_w;
	int		check;
	int		min_h;
	int		min_w;
	t_point	V1;
	t_point	V2;
	t_point	V3;
	t_point	PT;
};

#endif
