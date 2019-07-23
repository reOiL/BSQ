/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io_support.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwebber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 12:41:44 by jwebber           #+#    #+#             */
/*   Updated: 2019/07/23 09:01:05 by jwebber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "io_support.h"
#include "ft/func_prot.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	*io_read(int fd)
{
	char	*result;
	char	buffer[BUFF_SIZE + 1];
	int		res;
	int		taked;

	taked = 0;
	result = (char *)malloc(sizeof(char) * 1);
	while ((res = read(fd, buffer, BUFF_SIZE)))
	{
		if (res == -1)
			break ;
		buffer[res] = '\0';
		result = ft_realloc(result, res);
		ft_strcpy(&result[taked], buffer);
		taked += res;
	}
	if (fd > 0)
		close(fd);
	return (result);
}
