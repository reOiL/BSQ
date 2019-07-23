/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwebber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 12:32:11 by jwebber           #+#    #+#             */
/*   Updated: 2019/07/23 11:32:02 by jwebber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "io_support.h"
#include "ft/func_prot.h"
#include "list/ft_list.h"
#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	int		fd;
	int		i;
	char	*buff;

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
	return (0);
}
