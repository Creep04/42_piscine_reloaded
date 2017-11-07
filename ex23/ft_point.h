/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtheo <dtheo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 03:03:03 by dtheo             #+#    #+#             */
/*   Updated: 2017/11/03 03:03:03 by dtheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINT_H
#define FT_POINT_H

typedef struct s_point
{
	int		x;
	int		y;
} t_point;

void	set_point(t_point *point);

#endif
