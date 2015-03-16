/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fpairnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/16 09:31:15 by ncoden            #+#    #+#             */
/*   Updated: 2015/03/16 10:47:09 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_fpair			*ft_fpairnew(char index, void (*func)())
{
	t_fpair		*new;

	if (data)
	{
		if (new = (t_fpair *)malloc(sizeof(t_fpair)))
		{
			new->index = index;
			new->func = func;
			return (new);
		}
	}
	return (NULL);
}