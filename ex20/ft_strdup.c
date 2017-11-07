/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtheo <dtheo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 02:18:47 by dtheo             #+#    #+#             */
/*   Updated: 2017/11/03 02:18:47 by dtheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		r;

	r = 0;
	while (*str)
	{
		str++;
		r++;
	}
	return (r);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	int		i;

	if (!(copy = (char*)malloc(sizeof(char) * ft_strlen(src))))
		return (copy);
	i = 0;
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
