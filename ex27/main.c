/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtheo <dtheo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 17:02:49 by dtheo             #+#    #+#             */
/*   Updated: 2017/11/06 17:02:51 by dtheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int		main(int argc, char **argv)
{
	int		fd;
	
	if (argc < 2)
		ft_putstr("File name missing.\n");
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else
	{
		if ((fd = open(argv[1], O_RDONLY)) == -1)
			return (-1);
		display_file(fd);
		close(fd);
	}
	return (0);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	display_file(int fd)
{
	char	buffer[1];
	int		bytes;
	
	while ((bytes = read(fd, buffer, 1)) != 0)
		write(1, buffer, 1);
}
