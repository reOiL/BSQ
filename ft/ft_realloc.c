/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraelene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 13:51:12 by jraelene          #+#    #+#             */
/*   Updated: 2019/07/21 16:11:31 by jraelene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "func_prot.h"
#include "stdlib.h"

char	*ft_realloc(char *array, int new_len)
{
	char *res;

	res = malloc(((ft_strlen(array) + 1) + new_len) * sizeof(char));
	res = ft_strcpy(res, array);
	free(array);
	return (res);
}
