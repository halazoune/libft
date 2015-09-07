/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:58:33 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/29 20:59:14 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_ERRORS_H
# define LIBFT_ERRORS_H

typedef struct	s_err
{
	int		err;
	char	*mess;
}				t_err;

t_err			*ft_errnew(int err, char *mess);
void			ft_errdel(t_err *err);

#endif