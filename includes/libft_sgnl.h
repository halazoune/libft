/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_sgnl.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:21:17 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/17 19:34:01 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_SGNL_H
# define LIBFT_SGNL_H

# include "libft_evnt.h"

t_ilst_evnt		*g_sgnl;

void			ft_sgnlhook(char sig, void (*func)(void *), void *data);
void			ft_sgnlset(t_ilst_evnt *events);
void			ft_sgnltrigger(char sig);

void			ft_sgnlclr();
void			ft_sgnlclrone(char sig);
void			ft_sgnldel();
void			ft_sgnldelone(char sig);

#endif
