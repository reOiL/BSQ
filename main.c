/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwebber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 12:32:11 by jwebber           #+#    #+#             */
/*   Updated: 2019/07/23 11:17:27 by jwebber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "io_support.h"
#include "ft/func_prot.h"
#include "list/ft_list.h"
#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int		solve(char *str)
{
	t_node	node;
	t_list	*lst;

	lst = ft_split(str);
	if (!parse_info(&node, lst->data) || !verificate(lst->next, node))
	{
		ft_list_clear(&lst, 1);
		return (0);
	}
	ft_list_clear(&lst, 1);
	return (1);
}

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
