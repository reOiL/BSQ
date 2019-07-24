/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brains.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwebber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 15:27:59 by jwebber           #+#    #+#             */
/*   Updated: 2019/07/24 09:59:54 by jwebber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"
#include <stdio.h>

void	print_ele(t_list *lst)
{
	while (lst)
	{
		ft_putstr(lst->data);
		ft_putchar('\n');
		lst = lst->next;
	}
}

int		solve(char *str)
{
	t_list		*lst;
	t_quadro	points;

	lst = ft_split(str);
	if (!parse_info(&g_info, lst->data) || !verificate(lst->next, g_info))
	{
		ft_list_clear(&lst, 1);
		return (0);
	}
	points = parse(ft_list_copy(lst->next), 1);
	array_fill(lst->next, points);
	print_ele(lst->next);
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
		while (str[++j] != '\0')
		{
			if (str[j] != node.empty && str[j] != node.obst)
				return (0);
		}
		vmax = ft_max(j, vmax);
		if (vmax > j)
			return (0);
	}
	return (1);
}

void	array_fill(t_list *a, t_quadro point)
{
	int		i;
	int		j;
	t_list	*temp;

	i = point.x.x;
	while (i < point.y.x + 1)
	{
		j = point.x.y;
		temp = ft_list_at(a, i);
		while (j < point.y.y + 1)
		{
			((char *)temp->data)[j] = g_info.fil;
			j++;
		}
		i++;
	}
}
