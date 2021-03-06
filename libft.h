/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdanylev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 12:58:34 by hdanylev          #+#    #+#             */
/*   Updated: 2017/12/19 17:48:39 by hdanylev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <fcntl.h>
# define BUFF_SIZE 2048

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

int					get_next_line(const int fd, char **line);
size_t				ft_strlcat(char *s1, const char *s2, size_t dstsize);
size_t				ft_strlen(const char *str);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memchr(const void *src, int c, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t n);
void				*ft_memset(void *b, int c, size_t len);
void				*ft_memalloc(size_t size);
void				ft_striter(char *str, void (*f)(char *));
void				ft_strdel(char **str);
void				ft_memdel(void **str);
void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr(char const *str);
void				ft_putstr_fd(char const *str, int fd);
void				ft_putnbr(int nb);
void				ft_putnbr_fd(int nb, int fd);
void				ft_putendl(char const *str);
void				ft_putendl_fd(char const *str, int fd);
void				ft_bzero(void *b, size_t len);
void				ft_strclr(char *str);
void				ft_swap(int *a, int *b);
void				ft_striteri(char *str, void (*f)(unsigned int, char *));
int					ft_stralpha(char *str);
int					ft_strdigit(char *str);
int					ft_srchindex(char *tmp, char *srch, int i);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
int					ft_strnequ(const char *s1, const char *s2, size_t len);
int					ft_strequ(const char *s1, const char *s2);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(char *s1, char *s2, size_t len);
int					ft_toupper(int c);
int					ft_tolower(int c);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_isdigit(int c);
int					ft_atoi(const char *str);
char				**ft_strsplit(const char *str, char c);
char				*ft_strstr(const char *tmp, const char *srch);
char				*ft_strmapi(char const *str, char (*f)(unsigned int, char));
char				*ft_strjoin(const char *s1, const char *s2);
char				*ft_strtrim(char const *str);
char				*ft_strup(char *str);
char				*ft_strdown(char *str);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strmap(char const *str, char (*f)(char));
char				*ft_strncat(char *s1, const char *s2, size_t n);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strchr(const char *str, int c);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strdup(const char *str);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_itoa(int n);
char				*ft_strnew(size_t size);
char				*ft_strnstr(const char *tmp, const char *srch, size_t len);
char				*ft_strrchr(const char *str, int c);
t_list				*ft_lstnew(void const *content, size_t content_size);
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void				ft_lstdelone(t_list **alst, void(*del)(void*, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void*, size_t));
void				ft_lstadd(t_list **alst, t_list *new);

#endif
