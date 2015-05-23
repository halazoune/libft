/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trmsignalhook.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/14 17:12:55 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/23 23:50:08 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_trmsignalhook(t_trm *trm, char sig, void (*func)(void *),
					void *data)
{
	t_ilst_evnt	*event;

	if ((event = (t_ilst_evnt *)ft_ilstpush__(sizeof(t_ilst_evnt),
			(t_ilst **)&trm->on_signal, sig)))
	{
		event->event.func = func;
		event->event.data = data;
	}
}
