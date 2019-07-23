/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwebber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 12:32:11 by jwebber           #+#    #+#             */
/*   Updated: 2019/07/23 21:24:20 by jwebber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "io_support.h"
#include "ft/func_prot.h"
#include "list/ft_list.h"
#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

void	read_file(int argc, char **argv)
{
	char	*buff;
	int		i;
	int		fd;

	i = 1;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd != -1)
		{
			if (fd == -1 || !(buff = io_read(fd)) || !solve(buff))
				write(2, "map error\n", 10);
			free(buff);
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	char	*buff;

	if (argc == 1)
	{
		buff = io_read(0);
		if (!(buff = io_read(0)) || !solve(buff))
			write(2, "map error\n", 10);
		free(buff);
	}
	else
		read_file(argc, argv);
	return (0);
}
