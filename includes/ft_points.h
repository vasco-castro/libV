/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_points.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:33:32 by vsoares-          #+#    #+#             */
/*   Updated: 2026/05/04 02:19:43 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINTS_H
# define FT_POINTS_H

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

typedef struct s_fpoint
{
	float	x;
	float	y;
}	t_fpoint;

typedef struct s_dpoint
{
	double	x;
	double	y;
}	t_dpoint;

typedef struct s_point3d
{
	int	x;
	int	y;
	int	z;
}	t_point3d;

typedef struct s_fpoint3d
{
	float	x;
	float	y;
	float	z;
}	t_fpoint3d;

typedef struct s_dpoint3d
{
	double	x;
	double	y;
	double	z;
}	t_dpoint3d;

void		set_point(t_point *point, int x, int y);
t_point		get_point(int x, int y);

void		set_fpoint(t_fpoint *point, float x, float y);
t_fpoint	get_fpoint(float x, float y);

void		set_dpoint(t_dpoint *point, double x, double y);
t_dpoint	get_dpoint(double x, double y);

void		set_point3d(t_point3d *point, int x, int y, int z);
t_point3d	get_point3d(int x, int y, int z);

void		set_fpoint3d(t_fpoint3d *point, float x, float y, float z);
t_fpoint3d	get_fpoint3d(float x, float y, float z);

void		set_dpoint3d(t_dpoint3d *point, double x, double y, double z);
t_dpoint3d	get_dpoint3d(double x, double y, double z);

#endif // FT_POINTS_H
