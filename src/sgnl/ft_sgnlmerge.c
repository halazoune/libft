/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sgnlmerge.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/17 18:27:41 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/19 18:02:24 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_sgnlmerge(t_ilst_evnt *events)
{
	ft_ilstmerge((t_ilst **)&g_sgnl, (t_ilst *)events);
	while (events != NULL)
	{
		signal(events->index, (void (*)(int))&ft_sgnltrigger);
		events = events->next;
	}
}
