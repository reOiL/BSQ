/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraelene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 16:44:55 by jraelene          #+#    #+#             */
/*   Updated: 2019/07/22 17:15:35 by jraelene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	while (*begin_list != NULL)
	{
		begin_list = &(*begin_list)->next;
	}
	*begin_list = ft_create_elem(data);
}
