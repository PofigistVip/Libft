/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlyne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 13:18:52 by larlyne           #+#    #+#             */
/*   Updated: 2019/04/13 15:04:17 by larlyne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *s, size_t n);

void			*ft_memcpy(void *dst, const void *src,
				size_t n);
void			*ft_memccpy(void *dst, const void *src,
				int c, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);

size_t			ft_strlen(const char *s);
char			*ft_strdup(const char *s1);
char			*ft_strcpy(char *dst, const char *src);
char			*ft_strncpy(char *dst, const char *src, size_t len);
char			*ft_strcat(char *s1, const char *s2);
char			*ft_strncat(char *s1, const char *s2,
				size_t n);
size_t			ft_strlcat(char *dst, const char *src,
				size_t size);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strstr(const char *haystack, const char *needle);
char			*ft_strnstr(const char *haystack, const char *needle,
				size_t len);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_atoi(const char *str);

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);

int				ft_toupper(int c);
int				ft_tolower(int c);

void			*ft_memalloc(size_t size);
void			ft_memdel(void **ap);
char			*ft_strnew(size_t size);
void			ft_strdel(char **as);
void			ft_strclr(char *s);
void			ft_striter(char *s, void (*f)(char*));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));

int				ft_strequ(char const *s1, char const *s2);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s);
char			**ft_strsplit(char const *s, char c);
char			*ft_itoa(int n);

void			ft_putchar(char c);
void			ft_putstr(char const *s);
void			ft_putendl(char const *s);
void			ft_putnbr(int n);

void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char const *s, int fd);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putnbr_fd(int n, int fd);

t_list			*ft_lstnew(void const *content, size_t content_size);
void			ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void			ft_lstdel(t_list **alst, void (*del)(void*, size_t));
void			ft_lstadd(t_list **alst, t_list *new);
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

void			ft_setcolors(int foreg, int backg);
void			ft_setcolors_fd(int foreg, int backg, int fd);
void			ft_setforeground(int foreg);
void			ft_setforeground_fd(int foreg, int fd);
void			ft_setbackground(int backg);
void			ft_setbackground_fd(int backg, int fd);
void			ft_setdefault_cols(int fd);
long			ft_pos_power(int nb, unsigned int power);
void			*ft_realloc(void *src, size_t old_size, size_t new_size);
int				ft_putstrn_fd(int fd, char *str, int n);
int				ft_putstrn(char *str, int n);
char			*ft_uitoa_base(unsigned long long int nbr, int base, char upper);
char			*ft_llitoa(long long int n);
int				ft_putcharn_fd(int fd, char c, int n);
int				ft_isint(const char *str);

/*
** Larlyne's String
** ft_lstr_new_empty - вернет пустую созданную строку
** ft_lstr_new - вернет строку из %c символов %n длины
** ft_lstr_from_raw - создать lstr с указывающий на %str
** ft_lstr_new_copy - копировать %str в новый lstr
** ft_lstr_insert_c - добавляет символ %c %count раз в позицию %index
** ft_lstr_insert_s - добавляет строку %str в позицию %index
** ft_lstr_insert_sn - добавляет %n символов строки %str
** ft_lstr_place_c - заменяет %count символов начиная с %index
**  на символ %c, если длины строки недостаточно, она будет продлена
** ft_lstr_place_s - помещает строку %str в позицию %index
**  поверх существующих символов
** ft_lstr_place_sn - помещает %len символов строки %s в позицию %index
**  поверх существующих символов
** в позицию %index, но не больше чем в строке %str
** ft_lstr_put_fd - выводит строку в поток %fd
** ft_lstr_put - выводит строку в стандартный поток вывода
** ft_lstr_destroy - уничтожает строку
** ft_lstr_minimize - уменьшает объем памяти занимаемый строкой
**	путем избавления от неиспользуемой части
*/

typedef struct	s_lstr
{
	char	*str;
	int		length;
	int		capacity;
}				t_lstr;

t_lstr			*ft_lstr_new_empty(void);
t_lstr			*ft_lstr_new(char c, int n);
t_lstr			*ft_lstr_new_raw(char *str);
t_lstr			*ft_lstr_new_copy(char *str);

void			ft_lstr_insert_c(t_lstr *lstr, char c, int count, int index);
void			ft_lstr_insert_s(t_lstr *lstr, char *str, int index);
void			ft_lstr_insert_sn(t_lstr *lstr, char *str, int len, int index);

void			ft_lstr_place_c(t_lstr *lstr, char c, int count, int index);
void			ft_lstr_place_s(t_lstr *lstr, char *str, int index);
void			ft_lstr_place_sn(t_lstr *lstr, char *str, int len, int index);

void			ft_lstr_put_fd(t_lstr *lstr, int fd);
void			ft_lstr_put(t_lstr *lstr);

void			ft_lstr_destroy(t_lstr **lstr);
void			ft_lstr_minimize(t_lstr *lstr);
int				ft_lstr_resize(t_lstr *lstr, int new_length);




/*
** larlyne's list
*/

typedef struct s_llist			t_llist;

typedef struct s_llist_elem		t_llist_elem;

struct			s_llist
{
	size_t			content_size;
	size_t			count;
	t_llist_elem	*start;
	t_llist_elem	*end;
};

struct			s_llist_elem
{
	void			*content;
	t_llist_elem	*prev;
	t_llist_elem	*next;
};

t_llist			*ft_llist_create(size_t content_size);
t_llist_elem	*ft_llist_elem_new(void *content, size_t content_size);
int				ft_llist_add(t_llist *llist, void *content);
void			*ft_llist_get(t_llist *llist, size_t index);
void			ft_llist_remove(t_llist *llist, size_t index,
					void (*cont_destroy)(void*));
void			ft_llist_clear(t_llist *llist, void (*cont_destroy)(void*));
void			ft_llist_destroy(t_llist **llist, void (*cont_destroy)(void*));

#endif
