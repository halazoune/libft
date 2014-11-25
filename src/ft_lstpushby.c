/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushby.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/20 19:50:47 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/21 17:01:57 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstpushby(t_list **alst, void *content, size_t csize,
				int (*f)(const void *, const void *, size_t, size_t))
{
	t_list		*new;

	if (alst != NULL && f != NULL)
	{
		new = ft_lstnew(content, csize);
		if (new != NULL)
			ft_lstaddby(alst, new, f);
		return (new);
	}
	return (NULL);
}
