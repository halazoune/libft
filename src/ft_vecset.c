/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/27 12:02:18 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/27 12:02:20 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_vecset(t_vec *vec, t_pos *pos, int len, double ang)
{
	vec->pos = *pos;
	vec->len = len;
	vec->ang = ang;
}