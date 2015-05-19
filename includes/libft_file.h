/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_file.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:36:21 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/19 16:22:26 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_FILE_H
# define LIBFT_FILE_H

# include "libft_lst.h"

typedef struct	s_fd
{
	int				fd;
	int				start;
	t_lst			*lst;
	struct s_fd		*next;
}				t_fd;

int				ft_readline(int fd, char **line);
t_lst			*ft_readtolst(int fd);
char			**ft_readtotab(int fd);

void			ft_readstop(void);

#endif
