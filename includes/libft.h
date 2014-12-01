/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 17:59:44 by ncoden            #+#    #+#             */
/*   Updated: 2014/12/01 19:04:53 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <mlx.h>
# include <math.h>

# define BUFF_SIZE 512
# define ABS(X) ((X > 0) ? X : -(X))
# define MAX(N, M) ((N > M) ? N : M)
# define MIN(N, M) ((N < M) ? N : M)
# define SIGN(X) ((X > 0) ? 1 : -1)
# define LIM(N, MN, MX) (MAX(MIN(N, MX), MN))

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

typedef struct	s_fd
{
	int				fd;
	int				start;
	t_list			*lst;
	struct s_fd		*next;
}				t_fd;

typedef struct	s_err
{
	int		err;
	char	*mess;
}				t_err;

typedef struct	s_env
{
	void	*mlx;
	void	*win;
}				t_env;

typedef struct	s_pos
{
	int		x;
	int		y;
}				t_pos;

typedef struct	s_size2d
{
	size_t	x;
	size_t	y;
}				t_size2d;

typedef struct	s_vec
{
	t_pos	pos;
	int		len;
	double	ang;
}				t_vec;

typedef struct	s_pos3d
{
	int		x;
	int		y;
	int		z;
}				t_pos3d;

typedef struct	s_ang3d
{
	double	x;
	double	y;
	double	z;
}				t_ang3d;

typedef struct	s_cam
{
	t_pos3d		pos;
	t_ang3d		ang;
	int			d;
	t_size2d	view;
}				t_cam;

typedef struct	s_env3d
{
	void	*mlx;
	void	*win;
	t_cam	*cam;
}				t_env3d;

int				ft_atoi(const char *str);
void			ft_bzero(void *s, size_t n);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memchr(const void *str, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memset(void *b, int c, size_t len);
char			*ft_strcat(char *dest, const char *src);
char			*ft_strchr(const char *str, int c);
int				ft_strcmp(const char *s1, const char *s2);
char			*ft_strcpy(char *dest, const char *src);
char			*ft_strdup(const char *src);
size_t			ft_strlcat(char *dest, const char *src, size_t size);
size_t			ft_strlen(const char *str);
char			*ft_strncat(char *dest, const char *src, size_t nb);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strncpy(char *dest, const char *src, size_t n);
char			*ft_strnstr(const char *str, const char *to_find, size_t size);
char			*ft_strrchr(const char *str, int c);
char			*ft_strstr(const char *str, const char *to_find);
int				ft_tolower(int c);
int				ft_toupper(int c);

void			*ft_memalloc(size_t size);
void			ft_memdel(void **ap);
char			*ft_strnew(size_t size);
void			ft_strdel(char **as);
void			ft_strclr(char *s);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
char			*ft_strmap(const char *s, char (*f)(char));
char			*ft_strmapi(const char *s, char (*f)(unsigned int, char));
int				ft_strequ(const char *s1, const char *s2);
int				ft_strnequ(const char *s1, const char *s2, size_t n);
char			*ft_strsub(const char *s, unsigned int start, size_t len);
char			*ft_strjoin(const char *s1, const char *s2);
char			*ft_strtrim(const char *s);
char			**ft_strsplit(const char *s, char c);
char			*ft_itoa(int n);
void			ft_putchar(char c);
void			ft_putstr(const char *s);
void			ft_putnbr(int n);
void			ft_putendl(const char *s);
void			ft_putchar_fd(const char c, int fd);
void			ft_putstr_fd(const char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putendl_fd(const char *s, int fd);

t_list			*ft_lstnew(void const *content, size_t content_size);
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstadd(t_list **alst, t_list *new);
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

void			ft_lstaddend(t_list **alst, t_list *new);
void			ft_lstaddafter(t_list *lst, t_list *new);
t_list			*ft_lstpushfront(t_list **alst, const void *content,
					size_t csize);
t_list			*ft_lstpushback(t_list **alst, const void *content,
					size_t csize);
void			*ft_lstfold(t_list *lst,
					void *(*f)(const void *, const void *, size_t));
t_list			*ft_strsplit_tolst(const char *s, char c);
int				ft_memequ(const void *b1, const void *b2, size_t size);
void			*ft_memsub(const void *b, unsigned int start, size_t len);
char			*ft_strccpy(char *dst, const char *src, char c, size_t n);
char			*ft_lstcpy_tostr(t_list *lst, char *dst, size_t n);
char			*ft_lstccpy_tostr(t_list *lst, char *dst, char c, size_t n);
t_list			*ft_lstdup(t_list *lst);
char			*ft_strlstjoin(t_list *lst);
void			ft_lstshift(t_list **alst);
t_list			*ft_lstln(void *content, size_t content_size);
t_list			*ft_lstlnafter(t_list *lst, void *content,
					size_t content_size);
char			*ft_strdjoin(const char *s1, const char *d, const char *s2);
size_t			ft_stricpy(char *dest, const char *src);
void			*ft_memdup(const void *src, size_t size);
size_t			ft_nbrlen(int nbr);
void			ft_putspace(size_t len);
void			ft_putnbrleft(int nbr, size_t min_len);
void			ft_putnbrright(int nbr, size_t min_len);
void			ft_putstrleft(const char *s, size_t min_len);
void			ft_putstrright(const char *s, size_t min_len);
int				ft_power(int nbr, int power);
void			ft_putnstr(const char *s, int n);
void			ft_putnchar(char c, size_t n);
t_list			*ft_lstlnfront(t_list **alst, void *content, size_t csize);
t_list			*ft_lstlnback(t_list **alst, void *content, size_t csize);
t_list			*ft_lstpushafter(t_list *lst, const void *content,
					size_t csize);
void			ft_lstaddby(t_list **alst, t_list *new,
					int (*f)(const void *, const void *, size_t, size_t));
t_list			*ft_lstpushby(t_list **alst, void *content, size_t csize,
					int (*f)(const void *, const void *, size_t, size_t));
t_list			*ft_lstlnby(t_list **alst, void *content, size_t csize,
					int (*f)(const void *, const void *, size_t, size_t));
void			ft_lstaddrby(t_list **alst, t_list *new,
					int (*f)(const void *, const void *, size_t, size_t));
t_list			*ft_lstpushrby(t_list **alst, void *content, size_t csize,
					int (*f)(const void *, const void *, size_t, size_t));
t_list			*ft_lstlnrby(t_list **alst, void *content, size_t csize,
					int (*f)(const void *, const void *, size_t, size_t));
int				ft_min(int nbr1, int nbr2);
int				ft_max(int nbr1, int nbr2);
int				ft_readline(int const fd, char **line);
int				ft_lstlen(t_list *lst);
void			**ft_lsttotab(t_list *lst);
t_list			*ft_tabtolst(void **tab);
t_list			*ft_readtolst(int fd);
char			**ft_readtotab(int fd);
char			**ft_strdiv(char *s, char c);
size_t			ft_memlen(void *mem, size_t memsize);
size_t			ft_tablen(void *tab);
double			ft_degtorad(double deg);
double			ft_radtodeg(double rad);
t_err			*ft_errnew(int err, char *mess);

t_pos			*ft_posnew(int x, int y);
void			ft_posset(t_pos *pos, int x, int y);
void			ft_printline(t_env *e, t_pos *from, t_pos *to, int color);
void			ft_printsqr(t_env *e, t_pos *from, t_pos *to, int color);
t_size2d		*ft_size2dnew(size_t x, size_t y);
void			ft_size2dset(t_size2d *size2d, size_t x, size_t y);
t_env			*ft_envnew(void *mlx, int size_x, int size_y, char *title);

t_vec			*ft_vecnew(t_pos *pos, int len, double ang);
void			ft_vecset(t_vec *vec, t_pos *pos, int len, double ang);
void			ft_printvec(t_env *e, t_vec *vec, int color);

t_pos3d			*ft_pos3dnew(int x, int y, int z);
void			ft_pos3dset(t_pos3d *pos3d, int x, int y, int z);
t_ang3d			*ft_ang3dnew(double x, double y, double z);
void			ft_ang3dset(t_ang3d *ang3d, double x, double y, double z);
t_cam			*ft_camnew(t_pos3d *pos, t_ang3d *ang, int d, t_size2d *view);
void			ft_camset(t_cam *cam, t_pos3d *pos, t_ang3d *ang, int d);
t_env3d			*ft_env3dnew(void *mlx, int size_x, int size_y, char *title);
void			ft_env3dset(t_env3d *env3d, void *mlx, t_cam *cam, char *title);
void			ft_print3dline(t_env3d *e, t_pos3d *from, t_pos3d *to,
					int color);
void			ft_3dto2dpos(t_env3d *e, t_pos3d *pos3d, t_pos *pos2d);


#endif
