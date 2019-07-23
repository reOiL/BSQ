/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwebber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 16:23:36 by jwebber           #+#    #+#             */
/*   Updated: 2019/07/23 11:13:39 by jwebber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include "ft/ft_pair.h"
# include "ft/func_prot.h"

void	array_fill(char **a, t_node conf, t_quadro point);
int		parse_info(t_node *node, char *str);
int		verificate(t_list *lst, t_node node);

#endif
