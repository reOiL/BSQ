/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pair.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwebber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 15:06:25 by jwebber           #+#    #+#             */
/*   Updated: 2019/07/22 15:09:25 by jwebber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PAIR_H
# define FT_PAIR_H

typedef struct	s_pair
{
	int			x;
	int			y;
}				t_pair;

typedef struct	s_quadro
{
	t_pair		x;
	t_pair		y;
}				t_quadro;
#endif
