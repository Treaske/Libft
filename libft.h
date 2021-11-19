/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-blas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 19:30:14 by ade-blas          #+#    #+#             */
/*   Updated: 2021/11/02 17:04:44 by ade-blas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

void			ft_lstadd_front(t_list **lst, t_list *new);
t_list			*ft_lstnew(void *content);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));

int				ft_memcmp(const void *s1, const void *s2, size_t n);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_atoi(const char *str);
int				ft_isalnum(int leter);
int				ft_isalpha(int leter);
int				ft_isascii(int num);
int				ft_isdigit(int num);
int				ft_isprint(int num);
int				ft_tolower(int c);
int				ft_toupper(int c);

void			*ft_memmove(void *d, const void *s, size_t n);
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memchr(const char *s, int c, size_t n);
void			*ft_memset(void *b, int c, size_t len);
void			*ft_calloc(size_t count, size_t size);
void			ft_putendl_fd(char *s, int fd);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_bzero(void *s, size_t n);
void			ft_putnbr_fd(int n, int fd);

char			*ft_strnstr(const char *haystac, const char *needl, size_t len);
char			*ft_strmapi(char const *s, char (*f) (unsigned int, char));
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_strjoin(char const *s1, char const *s2);
char			**ft_split(char const *s, char c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strchr( char *s, int c);
char			*ft_strdup(const char *s1);
char			*ft_itoa(int n);

unsigned long	ft_strlcpy(char *d, const char *s, size_t n);
unsigned long	ft_strlen(const char *frase);

size_t			ft_strlcat(char *dest, const char *src, size_t size);
#endif
