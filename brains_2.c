/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brains_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwebber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 11:35:43 by jwebber           #+#    #+#             */
/*   Updated: 2019/07/23 16:29:25 by jwebber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int			is_fill(t_list *dat)
{
	int		j;

	while (dat != 0)
	{
		j = 0;
		while (((char *)dat->data)[j] != '\0')
		{
			if (((char *)dat->data)[j] == g_info.empty)
				return (0);
		}
		dat = dat->next;
	}
	return (1);
}

char		ft_zip(t_list *dat, int i, int j)
{
	t_list	*x;
	t_list	*y;

	x = ft_list_at(dat, i);
	y = ft_list_at(dat, (i + 1));
	if (y == 0 || j == ft_strlen((char*)x->data))
		return (((char *)x->data)[j]);
	if (((char *)x->data)[j] == g_info.empty &&
			((char *)x->data)[j + 1] == g_info.empty &&
			((char *)y->data)[j] == g_info.empty &&
			((char *)y->data)[j + 1] == g_info.empty)
		return (g_info.empty);
	return (g_info.obst);
}

t_pair		ft_find_index(t_list *dat)
{
	t_pair	ret;

	ret.x = 0;
	while (dat)
	{
		ret.y = 0;
		while (((char *)dat->data)[ret.y])
		{
			if (((char *)dat->data)[ret.y] == g_info.empty)
			{
				return (ret);
			}
			ret.y++;
		}
		ret.x++;
		dat = dat->next;
	}
	ret.x = -1;
	ret.y = -1;
	return (ret);
}

char		*ft_transform(t_list *dat, int i)
{
	char	*res;
	int		j;

	res = (char *)malloc(ft_strlen(dat->data));
	j = 0;
	while (((char *)(dat->data))[j] != '\0')
	{
		res[j] = ft_zip(dat, i, j);
		j++;
	}
	return (res);
}

t_quadro	parse(t_list *dat)
{
	t_quadro	res;
	int			no_way;
	t_list		*next;
	int			i;

	no_way = 1;
	i = 0;
	next = NULL;
	while (dat)
	{
		ft_list_push_back(&next, ft_transform(dat, i));
		dat = dat->next;
		i++;
	}
	if (!no_way)
	{
		res = parse(next);
		res.y.x += 1;
		res.y.y += 1;
		return (res);
	}
	res.x = ft_find_index(dat);
	res.y = res.x;
	return (res);
}
