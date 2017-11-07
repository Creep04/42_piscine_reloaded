/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtheo <dtheo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 23:42:12 by dtheo             #+#    #+#             */
/*   Updated: 2017/11/01 23:42:12 by dtheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

void	ft_sort_params(char **argv)
{
	int		a;
	int		b;
	char	*tmp;

	a = 0;
	while (argv[a])
	{
		b = a + 1;
		while (argv[b])
		{
			if (ft_strcmp(argv[a], argv[b]) > 0)
			{
				tmp = argv[a];
				argv[a] = argv[b];
				argv[b] = tmp;
			}
			b++;
		}
		ft_putstr(argv[a]);
		ft_putchar('\n');
		a++;
	}
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	ft_sort_params(argv + 1);
	return (0);
}
