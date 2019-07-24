/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwebber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 20:35:17 by jwebber           #+#    #+#             */
/*   Updated: 2019/07/23 20:41:47 by jwebber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft/func_prot.h"
#include "ft_list.h"

t_list	*ft_split(char *str)
{
	t_list	*ret;
	int		i;
	int		j;

	ret = 0;
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == '\n')
		{
			str[i] = '\0';
			ft_list_push_back(&ret, ft_strdup(&str[j]));
			j = i + 1;
		}
		i++;
	}
	return (ret);
}
