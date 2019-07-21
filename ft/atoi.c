/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraelene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 12:33:17 by jraelene          #+#    #+#             */
/*   Updated: 2019/07/21 13:29:07 by jraelene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "func_prot.h"

int		is_num(char c)
{
	return (c >= '0' && c <= '9');
}

int		is_np(char c)
{
	return (c == '-' || c == '+');
}

int		is_space(char c)
{
	return (c == ' ' || c == '\n' ||
			c == '\t' || c == '\v' || c == '\f' || c == '\r');
}

int		ft_atoi(char *str)
{
	int i;
	int n;
	int m;

	i = 0;
	n = 10;
	m = 1;
	if (!is_num(*str) && !is_np(*str) && !is_space(*str))
		return (0);
	while (is_space(*str) && *str)
		str++;
	if (*str == '-')
		m = -1;
	if (is_np(*str))
		str++;
	while (is_num(*str))
	{
		i = (i * n) + (*str - '0');
		str++;
	}
	return (m * i);
}
