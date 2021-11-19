/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-blas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 17:18:18 by ade-blas          #+#    #+#             */
/*   Updated: 2021/09/12 12:43:19 by ade-blas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	leng(const char *s, char c)
{
	int	x;

	x = 0;
	while (s[x] != '\0' && s[x] != c)
		x++;
	return (x);
}

static void	*free_glob(char **glob, int x)
{
	while (x > 0)
	{
		free(glob[x]);
		x--;
	}
	free(glob);
	return (NULL);
}

static int	count_words(const char *s, char c)
{
	int	cont;
	int	contw;

	cont = 0;
	contw = 0;
	while (s[cont] != '\0')
	{
		if (s[cont] != c)
		{
			if (s[cont + 1] == '\0')
				contw++;
		}
		else if (s[cont] == c)
		{
			if ((cont != 0) && (s[cont - 1] != c))
				contw++;
		}
		cont++;
	}
	return (contw);
}

static char	*get_word(const char *s, char c)
{
	int		x;
	int		wlen;
	char	*aux;

	x = 0;
	wlen = leng(s, c);
	aux = malloc(sizeof(char) * (wlen + 1));
	if (!aux)
		return (NULL);
	while (x < wlen)
	{
		aux[x] = s[x];
		x++;
	}
	aux[wlen] = '\0';
	return (aux);
}

char	**ft_split(char const *s, char c)
{
	char	**glob;
	int		x;
	int		countw;

	x = 0;
	if (!s)
		return (NULL);
	countw = count_words(s, c);
	glob = malloc(sizeof(char *) * (countw + 1));
	if (!glob)
		return (NULL);
	while (countw > 0)
	{
		while (*s == c && *s != '\0')
			s++;
		glob[x] = get_word(s, c);
		while (*s != c && *s != '\0')
			s++;
		if (!glob[x])
			return (free_glob(glob, x));
		x++;
		countw--;
	}
	glob[x] = NULL;
	return (glob);
}
