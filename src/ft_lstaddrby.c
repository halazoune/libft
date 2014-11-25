/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddrby.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/21 12:01:37 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/21 17:01:31 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstaddrby(t_list **alst, t_list *new,
				int (*f)(const void *, const void *, size_t, size_t))
{
	t_list		*view;
	t_list		*view_prev;

	if (alst != NULL && new != NULL && f != NULL)
	{
		view = *alst;
		view_prev = NULL;
		while (view != NULL && (*f)(new->content, view->content,
			new->content_size, view->content_size) > 0)
		{
			view_prev = view;
			view = view->next;
		}
		if (view_prev != NULL)
			ft_lstaddafter(view_prev, new);
		else
			ft_lstadd(alst, new);
	}
}
