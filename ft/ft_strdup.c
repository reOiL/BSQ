/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwebber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 20:42:21 by jwebber           #+#    #+#             */
/*   Updated: 2019/07/23 21:20:09 by jwebber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "func_prot.h"
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*res;

	res = malloc(ft_strlen(src));
	if (res == 0)
		ft_memerror();
	ft_strcpy(res, src);
	return (res);
}
