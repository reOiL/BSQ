/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraelene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 17:32:32 by jraelene          #+#    #+#             */
/*   Updated: 2019/07/23 08:15:41 by jwebber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list, int delete_item)
{
	if (*begin_list == NULL)
		return ;
	ft_list_clear(&(*begin_list)->next, delete_item);
	if (delete_item)
		free((*begin_list)->data);
	free(*begin_list);
}
