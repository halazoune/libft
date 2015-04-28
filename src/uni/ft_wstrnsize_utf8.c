/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrnsize_utf8.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/02 08:51:35 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/28 08:00:06 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_wstrnsize_utf8(const wchar_t *ws, size_t n)
{
	char		csize;
	size_t		size;

	if (!ws)
		return (0);
	size = 0;
	while (*ws != '\0' && size < n)
	{
		csize = ft_wchrsize_utf8(*ws);
		if (size + csize > n)
			return (size);
		size += csize;
		ws++;
	}
	return (size);
}
