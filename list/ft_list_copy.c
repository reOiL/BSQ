/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_copy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwebber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 09:47:10 by jwebber           #+#    #+#             */
/*   Updated: 2019/07/24 09:59:23 by jwebber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "../ft/func_prot.h"

t_list	*ft_list_copy(t_list *src)
{
	t_list	*res;

	res = 0;
	while (src)
	{
		ft_list_push_back(&res, ft_strdup(src->data));
		src = src->next;
	}
	return (res);
}
