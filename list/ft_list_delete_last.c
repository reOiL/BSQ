/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_delete_last.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwebber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 10:15:01 by jwebber           #+#    #+#             */
/*   Updated: 2019/07/24 10:29:35 by jwebber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_delete_last(t_list **lst)
{
	if (!*lst)
		return ;
	if (!(*lst)->next)
	{
		ft_list_clear(lst, 1);
		lst = 0;
		return ;
	}
	while ((*lst)->next->next)
	{
		lst = &(*lst)->next;
	}
	ft_list_clear(&(*lst)->next, 1);
	(*lst)->next = 0;
}
