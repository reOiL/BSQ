/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io_support.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwebber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 12:41:44 by jwebber           #+#    #+#             */
/*   Updated: 2019/07/21 12:59:39 by jwebber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "io_support.h"
#include <unistd.h>

char	*io_read(int fd)
{
	char	*result;
	char	buffer[BUFF_SIZE];
	int		res;

	result = NULL;
	while ((res = read(fd, buffer, BUFF_SIZE)))
	{
		if (res == -1)
			break ;
		// TODO: reallocate array, copy new data to new array
	}
	return (result);
}
