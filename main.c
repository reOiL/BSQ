/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwebber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 12:32:11 by jwebber           #+#    #+#             */
/*   Updated: 2019/07/22 08:25:29 by jwebber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "io_support.h"
#include "ft/func_prot.h"
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
		// TODO: split whitespace
		free(buff);
		// TODO: add function fo solve
	}
	else
	{
		while (i < argc)
		{
			fd = open(argv[i++], O_RDONLY);
			if (fd != -1)
			{
                buff = io_read(fd);
                ft_putstr(buff);
                // TODO: split whitespace
                free(buff);
                // TODO: add function fo solve
            }
		}
	}
	return (0);
}
