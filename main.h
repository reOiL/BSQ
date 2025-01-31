/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwebber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 16:23:36 by jwebber           #+#    #+#             */
/*   Updated: 2019/07/24 08:19:34 by jwebber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include "ft/ft_pair.h"
# include "ft/func_prot.h"

void		array_fill(t_list *a, t_quadro point);
int			parse_info(t_node *node, char *str);
int			verificate(t_list *lst, t_node node);
int			solve(char *str);
t_quadro	parse(t_list *dat, int first);
t_node		g_info;
void		print_ele(t_list *lst);
t_quadro	ft_inc_qy(t_quadro q);
#endif
