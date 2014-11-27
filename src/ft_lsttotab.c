/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsttotab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/27 15:28:57 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/27 18:07:19 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	**ft_lsttotab(t_list *lst)
{
	int		i;
	int		size;
	t_list	*next;
	void	**tab;

	tab = NULL;
	if (lst)
	{
		size = ft_lstlen(lst);
		if ((tab = (void **)malloc(sizeof(void *) * (size + 1))))
		{
			i = 0;
			while (i < size)
			{
				tab[i] = lst->content;
				next = lst->next;
				free(lst);
				lst = next;
			}
			tab[i] = NULL;
		}
	}
	return (tab);
}