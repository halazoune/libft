/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_mt.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:21:17 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/27 14:09:15 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_MT_H
# define LIBFT_MT_H

# define EXTEND_MT(type)	struct {struct type *next; struct type *child;}
# define MT_DATA(lst)		(lst + sizeof(void *))

typedef struct	s_mt
{
	EXTEND_MT	(s_mt);
	void		*data;
	size_t		size;
}				t_mt;

t_mt			*ft_mtnew(void *data, size_t size);

void			ft_mtaddnext(t_mt *mt, t_mt *child);
void			ft_mtaddchild(t_mt *mt, t_mt *child);

t_mt			*ft_mtpushnext(t_mt **amt, void *data, size_t size);
t_mt			*ft_mtpushchild(t_mt **amt, void *data, size_t size);

t_mt			*ft_mtnew__(size_t size);

#endif