/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-blas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 16:37:33 by ade-blas          #+#    #+#             */
/*   Updated: 2021/09/12 12:51:45 by ade-blas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	leng(const char *s)
{
	int	x;

	x = 0;
	while (s[x] != '\0')
		x++;
	return (x);
}

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	int		cont;
	int		x;
	char	*str;

	if (!s || !f)
		return (NULL);
	x = leng(s);
	cont = 0;
	str = malloc(sizeof(char) * (x + 1));
	if (!str)
		return (NULL);
	while (s[cont] != '\0')
	{
		str[cont] = f(cont, s[cont]);
		cont++;
	}
	str[cont] = '\0';
	return (str);
}
