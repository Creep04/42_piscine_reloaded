/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtheo <dtheo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 02:33:02 by dtheo             #+#    #+#             */
/*   Updated: 2017/11/03 02:33:02 by dtheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int		i;

	if (!(tab = (int*)malloc(sizeof(int) * (max - min))))
		return (tab);
	i = 0;
	while (min < max)
		tab[i++] = min++;
	return (tab);
}
