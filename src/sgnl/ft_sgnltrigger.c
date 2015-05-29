/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sgnltrigger.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/13 19:57:43 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/29 22:33:49 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_ilst	*find_ilst(t_stck *stck, int index, int *level)
{
	int			i;
	int			count;
	t_ilst		*ilst;

	i = 0;
	while (stck != NULL)
	{
		count = stck->count;
		while (count > 0)
		{
			count--;
			if ((ilst = ft_ilstget(stck->datas[count], index)))
			{
				*level = i;
				return (ilst);
			}
			i++;
		}
		stck = stck->next;
	}
	return (NULL);
}

t_bool			ft_sgnltrigger(char sig)
{
	int				index;
	t_ilst_evnt		*evnt;
	t_tdata			*esrc;

	index = -1;
	evnt = NULL;
	if (g_sgnl_evnts)
		evnt = (t_ilst_evnt *)ft_ilstget((t_ilst *)g_sgnl_evnts, sig);
	if (!evnt && g_sgnl_stckevnts)
		evnt = (t_ilst_evnt *)find_ilst(g_sgnl_stckevnts, sig, &index);
	if (!evnt)
		return (FALSE);
	esrc = NULL;
	if (g_sgnl_evnts && g_sgnl_esrc)
		esrc = g_sgnl_esrc;
	if (g_sgnl_stckevnts && g_sgnl_stckesrc && index != -1)
		esrc = (t_tdata *)ft_stckget(g_sgnl_stckesrc, index);
	if (esrc)
		ft_esrccall(&evnt->event, esrc->type, esrc->data);
	else
		evnt->event.func(evnt->event.data);
	return (TRUE);
}
