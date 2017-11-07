/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtheo <dtheo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 17:00:14 by dtheo             #+#    #+#             */
/*   Updated: 2017/11/06 17:00:15 by dtheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int r;
	
	nb = (nb < 0 ? -nb : nb);
	r = 1;
	while (nb / r > r)
		r++;
	if (nb / r == r)
		return (r);
	return (0);
}
