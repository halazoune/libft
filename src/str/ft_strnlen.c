/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/04 10:16:50 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/28 07:59:02 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strnlen(const char *s, size_t n)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0' && len < n)
		len++;
	return (len);
}