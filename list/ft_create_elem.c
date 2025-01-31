/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraelene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 16:21:35 by jraelene          #+#    #+#             */
/*   Updated: 2019/07/24 09:20:34 by jwebber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "../ft/func_prot.h"

t_list	*ft_create_elem(void *data)
{
	t_list *mas;

	mas = (t_list *)malloc(sizeof(t_list));
	if (mas == 0)
		ft_memerror();
	if (mas)
	{
		mas->data = data;
		mas->next = NULL;
	}
	return (mas);
}
