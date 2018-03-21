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
    double          x;
    double          z;
    char            *color;
    struct  s_row   *next;
}                   t_row;

typedef struct      s_fdf
{
    double          y;
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
	void            *init;
	void            *window;
	void            *image;
	int             angle_x;
	int             angle_y;
	int             angle_z;
}                   t_gen;

void    rotate_matrix(t_gen *gen);
void    print_in_window(t_gen *gen);
void    move_to_left(t_gen *gen);
void    move_to_right(t_gen *gen);
void    move_up(t_gen *gen);
void    move_down(t_gen *gen);