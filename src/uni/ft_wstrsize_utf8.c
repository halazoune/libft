/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrsize_utf8.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/02 08:51:35 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/28 07:59:54 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_wstrsize_utf8(const wchar_t *ws)
{
	size_t		size;

	if (!ws)
		return (0);
	size = 0;
	while (*ws != '\0')
	{
		size += ft_wchrsize_utf8(*ws);
		ws++;
	}
	return (size);
}
