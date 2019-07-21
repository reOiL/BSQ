/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_prot.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraelene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 12:29:04 by jraelene          #+#    #+#             */
/*   Updated: 2019/07/21 16:23:05 by jraelene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNC_PROT_H
# define FUNC_PROT_H

typedef struct s_list	t_list;

struct	s_list
{
	int		field_size;
	char	empty;
	char	obst;
	char	fil;
};

void	ft_putchar(char c);

void	ft_putstr(char *str);

int		ft_atoi(char *str);

int		ft_strlen(char *str);

char	*ft_strcpy(char *dest, char *src);

char	*ft_realloc(char *array, int new_len);

#endif
