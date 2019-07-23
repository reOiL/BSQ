/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io_support.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwebber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 12:41:44 by jwebber           #+#    #+#             */
/*   Updated: 2019/07/23 11:25:53 by jwebber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "io_support.h"
#include "ft/func_prot.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		count_new_line(char	*str)
{
	int	i;
	int	n;

	n = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			n++;
		i++;
	}
	return (n);
}

char	*io_read(int fd)
{
	char	*result;
	char	buffer[BUFF_SIZE + 1];
	int		res;
	int		taked;
	int		new_line_count;

	new_line_count = 0;
	taked = 0;
	result = (char *)malloc(sizeof(char) * 1);
	while ((res = read(fd, buffer, BUFF_SIZE)))
	{
		if (res == -1)
			break ;
		buffer[res] = '\0';
		result = ft_realloc(result, res);
		new_line_count += count_new_line(buffer);
		ft_strcpy(&result[taked], buffer);
		taked += res;
	}
	if (fd > 0)
		close(fd);
	return (result);
}
