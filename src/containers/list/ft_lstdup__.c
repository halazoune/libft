/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdup__.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 15:09:12 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/27 18:32:26 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lst			*ft_lstdup__(size_t size, t_lst *lst)
{
	t_lst		*new;
	t_lst		*view;

	if (!lst)
		return (NULL);
	if (!(new = ft_memdup(lst, size)))
		return (NULL);
	view = new;
	while (view->next != NULL)
	{
		if (!(view->next = ft_memdup(lst, size)))
		{
			ft_lstdel(&new, NULL);
			return (NULL);
		}
		lst = lst->next;
		view = view->next;
	}
	return (new);
}