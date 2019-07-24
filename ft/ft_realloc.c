/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraelene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 13:51:12 by jraelene          #+#    #+#             */
/*   Updated: 2019/07/23 21:21:59 by jwebber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "func_prot.h"
#include <stdlib.h>
#include <unistd.h>

void	ft_memerror(void)
{
	write(2, "memory error\n", 13);
	exit(1);
}

char	*ft_realloc(char *array, int new_len)
{
	char *res;

	res = malloc(((ft_strlen(array) + 1) + new_len) * sizeof(char));
	if (res == NULL)
		ft_memerror();
	res = ft_strcpy(res, array);
	free(array);
	return (res);
}
