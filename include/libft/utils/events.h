/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:21:17 by ncoden            #+#    #+#             */
/*   Updated: 2015/11/06 15:43:40 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_EVENTS_H
# define LIBFT_EVENTS_H

# include "libft/basics/booleans.h"
# include "libft/containers/ilst.h"
# include "libft/containers/klst.h"
# include "libft/containers/stack.h"
# include "libft/basics/types.h"

t_stck			*g_evnt_esrcs;

typedef struct	s_evnt
{
	void		(*func)(void *);
	void		*data;
}				t_evnt;

typedef struct	s_ilst_evnt
{
	ILST_BASE	(struct s_ilst_evnt);
	t_evnt		event;
}				t_ilst_evnt;

typedef struct	s_klst_evnt
{
	KLST_BASE	(struct s_klst_evnt);
	t_evnt		event;
}				t_klst_evnt;

typedef struct	s_ilst_esrc
{
	ILST_BASE	(struct s_ilst_esrc);
	t_tdata		esrc;
}				t_ilst_esrc;

typedef struct	s_klst_esrc
{
	KLST_BASE	(struct s_klst_esrc);
	t_tdata		esrc;
}				t_klst_esrc;

t_evnt			*ft_evntnew(void (*func)(void *), void *data);
void			ft_evntset(t_evnt *event, void (*func)(void *), void *data);
t_bool			ft_evntcall(t_evnt *event);
void			ft_evntstop(void);

t_bool			ft_ievnttrigger(t_ilst_evnt *events, int index);
t_bool			ft_kevnttrigger(t_klst_evnt *events, char *key);

/*
** The following macros are very useful, but the norm don't accept them
** - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
** # define ft_ilstnew_evnt(...)		ft_ilstnew_(t_ilst_evnt, __VA_ARGS__)
** # define ft_ilstpushback_evnt(...)	\
**				ft_ilstpushback_(t_ilst_evnt, __VA_ARGS__)
** # define ft_ilstpushfront_evnt(...)	\
**				ft_ilstpushfront_(t_ilst_evnt, __VA_ARGS__)
** # define ft_ilstget_evnt(...)		ft_ilstget_(t_ilst_evnt, __VA_ARGS__)
** # define ft_ilstdelone_evnt(...)		ft_ilstdelone_(t_ilst_evnt, __VA_ARGS__)
** # define ft_ilstrem_evnt(...)		ft_ilstrem_(t_ilst_evnt, __VA_ARGS__)
*/

/*
** The following macros are very useful, but the norm don't accept them
** - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
** # define ft_klstnew_evnt(...)		ft_klstnew_(t_klst_evnt, __VA_ARGS__)
** # define ft_klstpushback_evnt(...)	\
**				ft_klstpushback_(t_klst_evnt, __VA_ARGS__)
** # define ft_klstpushfront_evnt(...)	\
**				ft_klstpushfront_(t_klst_evnt, __VA_ARGS__)
** # define ft_klstget_evnt(...)		ft_klstget_(t_klst_evnt, __VA_ARGS__)
** # define ft_klstdelone_evnt(...)		ft_klstdelone_(t_ilst_evnt, __VA_ARGS__)
** # define ft_klstrem_evnt(...)		ft_klstrem_(t_klst_evnt, __VA_ARGS__)
*/

void			*ft_esrcget(t_type type);
t_bool			ft_esrcset(t_type type, void *data);
void			ft_esrccall(t_evnt *event, t_type esrc_type, void *esrc_data);
t_bool			ft_esrcrem(void);

t_bool			ft_iesrctrigger(t_ilst_evnt *events, int index,
					t_type esrc_type, void *esrc_data);
t_bool			ft_kesrctrigger(t_klst_evnt *events, char *key,
					t_type esrc_type, void *esrc_data);

t_bool			ft_iesrcstrigger(t_ilst_evnt *events, int index,
					t_ilst_esrc *srcs);
t_bool			ft_kesrcstrigger(t_klst_evnt *events, char *key,
					t_klst_esrc *srcs);

#endif
