/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brains.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwebber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 15:27:59 by jwebber           #+#    #+#             */
/*   Updated: 2019/07/23 12:30:16 by jwebber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		solve(char *str)
{
	t_list	*lst;

	lst = ft_split(str);
	if (!parse_info(&g_info, lst->data) || !verificate(lst->next, g_info))
	{
		ft_list_clear(&lst, 1);
		return (0);
	}
	ft_list_clear(&lst, 1);
	return (1);
}

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

int		ft_max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

int		verificate(t_list *lst, t_node node)
{
	int		i;
	int		j;
	int		vmax;
	char	*str;

	if (lst == NULL)
		return (0);
	if (ft_list_size(lst) != node.field_size)
		return (0);
	i = -1;
	vmax = -1;
	while (++i < node.field_size)
	{
		str = ft_list_at(lst, i)->data;
		j = -1;
		while (str[j] != '\0')
		{
			if (str[j] != node.empty || str[j] != node.obst)
				return (0);
		}
		vmax = ft_max(j, vmax);
		if (vmax > j)
			return (0);
	}
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
