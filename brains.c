/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brains.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwebber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 15:27:59 by jwebber           #+#    #+#             */
/*   Updated: 2019/07/22 16:24:18 by jwebber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

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
