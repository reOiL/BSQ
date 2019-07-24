/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwebber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 12:32:11 by jwebber           #+#    #+#             */
/*   Updated: 2019/07/24 15:54:58 by jraelene         ###   ########.fr       */
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
		buff = NULL;
		if (fd == -1 || !(buff = io_read(fd)) || !solve(buff))
			write(2, "map error\n", 10);
		i++;
		if (i < argc)
			ft_putchar('\n');
		if (buff)
			free(buff);
	}
}

int		main(int argc, char **argv)
{
	char	*buff;

	if (argc == 1)
	{
		if (!(buff = io_read(0)) || !solve(buff))
			write(2, "map error\n", 10);
		if (buff)
			free(buff);
	}
	else
		read_file(argc, argv);
	return (0);
}
