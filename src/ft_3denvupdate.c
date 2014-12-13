/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_3denvupdate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/08 16:13:36 by ncoden            #+#    #+#             */
/*   Updated: 2014/12/08 18:14:27 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_3denvupdate(t_3denv *e)
{
	if (e && e->mlx && e->win && e->img.data)
		mlx_put_image_to_window(e->mlx, e->win, e->img.data, 0, 0);
}
