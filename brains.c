/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brains.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwebber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 15:27:59 by jwebber           #+#    #+#             */
/*   Updated: 2019/07/23 09:15:58 by jwebber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		parse_info(t_node *node, char *str)
{
	int len;

	len = ft_strlen(str);
	if (len < 4)
		return (0);
	node->fil = str[--len];
	str[len] = '\0';
	node->obst = str[--len];
	str[len] = '\0';
	node->empty = str[--len];
	str[len] = '\0';
	node->field_size = ft_atoi(str);
	return (1);
}

void	array_fill(char **a, t_node conf, t_quadro point)
{
	int	i;
	int	j;

	i = point.x.x;
	j = point.x.y;
	while (i < point.y.x + 1)
	{
		while (j < point.y.y + 1)
		{
			a[i][j] = conf.fil;
			j++;
		}
		i++;
	}
}
