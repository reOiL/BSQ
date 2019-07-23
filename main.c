/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwebber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 12:32:11 by jwebber           #+#    #+#             */
/*   Updated: 2019/07/23 18:18:39 by jwebber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "io_support.h"
#include "ft/func_prot.h"
#include "list/ft_list.h"
#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	int		fd;
	int		i;
	char	*buff;

	clock_t start, end;
	start = clock();
	i = 1;
	if (argc == 1)
	{
		buff = io_read(0);
		free(buff);
	}
	else
	{
		while (i < argc)
		{
			fd = open(argv[i], O_RDONLY);
			if (fd != -1)
			{
				buff = io_read(fd);
				solve(buff);
				free(buff);
			}
			i++;
		}
	}
	end = clock();
	printf("\nexecution time: %f\n", (double)(end - start)/CLOCKS_PER_SEC);
	system("read -n");
	return (0);
}
