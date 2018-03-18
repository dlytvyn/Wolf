/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlytvyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 12:39:49 by dlytvyn           #+#    #+#             */
/*   Updated: 2018/03/16 12:39:50 by dlytvyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>
#include "/Users/dlytvyn/FDF/minilibx/mlx.h"
#include <fcntl.h>
#include <stdlib.h>
#include </Users/dlytvyn/FDF/GNL/get_next_line.h>

# define WINDOW_X 1500
# define WINDOW_Y 1000
# define SCALE    60

typedef struct      s_row
{
    int             x;
    int             z;
    char            *color;
    struct  s_row   *next;
}                   t_row;

typedef struct      s_fdf
{
    int             y;
    struct s_row    *row;
	struct s_row    *clone;
    struct s_fdf    *next;
}                   t_fdf;

typedef struct      s_gen
{
	struct  s_fdf   *list;
	struct  s_fdf   *run;
	int             *field;
	int             bits_per_pixel;
	int             size_line;
	int             endian;
	int             max_x;
	int             max_y;
}                   t_gen;