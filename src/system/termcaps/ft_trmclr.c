/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trmclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/14 17:01:18 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/12 21:01:58 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_trmclr(void)
{
	char		*cmd;

	if ((cmd = tgetstr("cl", NULL)))
		tputs(cmd, 0, (int (*)(int))&ft_putchr_trm);
	else
		ft_putnchr('\n', ft_trmheight());
}