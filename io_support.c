/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io_support.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwebber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 12:41:44 by jwebber           #+#    #+#             */
/*   Updated: 2019/07/24 15:06:39 by jraelene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "io_support.h"
#include "ft/func_prot.h"
#include <unistd.h>
#include <stdlib.h>

char	*io_read(int fd)
{
	char	*result;
	char	buffer[BUFF_SIZE + 1];
	int		res;
	int		taked;

	taked = 0;
	result = (char *)malloc(sizeof(char) * 1);
	if (result == NULL)
		ft_memerror();
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
	return (taked == 0 ? NULL : result);
}
