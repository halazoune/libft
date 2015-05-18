/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_ilst.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:21:17 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/18 15:48:55 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_ILST_H
# define LIBFT_ILST_H

# define EXTEND_ILST(type)	struct {EXTEND_LST(type); int index;}
# define ILST_DATA(ilst)	(LST_DATA(ilst) + sizeof(int))

typedef struct	s_ilst
{
	EXTEND_ILST	(s_ilst);
	void		*data;
	size_t		size;
}				t_ilst;

t_ilst			*ft_ilstnew(int index, void *data, size_t size);
t_ilst			*ft_ilstpushback(t_ilst **alst, int index, void *data,
					size_t size);
t_ilst			*ft_ilstpushfront(t_ilst **alst, int index, void *data,
					size_t size);
t_ilst			*ft_ilstget(t_ilst *lst, int index);
t_bool			ft_ilstdelone(t_ilst **alst, int index,
					void (*func)(t_ilst *lst));
t_ilst			*ft_ilstrem(t_ilst **alst, int index);

t_ilst			*ft_ilstnew__(size_t size, int index);
t_ilst			*ft_ilstpushback__(size_t size, t_ilst **alst, int index);
t_ilst			*ft_ilstpushfront__(size_t size, t_ilst **alst, int index);

/*
** The following macros are very useful, but the norm don't accept them
** - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
** # define ft_ilstnew_(t, i)			(t *)ft_ilstnew__(sizeof(t), i)
** # define ft_ilstpushback_(t, a, i)	\
**				(t *)ft_ilstpushback__(sizeof(t), (t_ilst **)a, i)
** # define ft_ilstpushfront_(t, a, i)	\
**				(t *)ft_ilstpushfront__(sizeof(t), (t_ilst **)a, i)
** # define ft_ilstget_(t, l, i)		(t *)ft_ilstget((t_ilst *)l, i)
** # define ft_ilstdelone_(t, l, i, f)	\
**				ft_ilstdelone((t_ilst **)l, i, (void (*)(t_ilst *))f)
** # define ft_ilstrem_(t, l, i)		(t *)ft_ilstrem((t_ilst **)l, i)
*/

#endif
