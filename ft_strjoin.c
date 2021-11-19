/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-blas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 14:40:54 by ade-blas          #+#    #+#             */
/*   Updated: 2021/09/12 12:48:46 by ade-blas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	strleng(char const *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

static char	*bucle(char const *s1, char const *s2, char *str)
{
	int	cont;
	int	len1;
	int	len2;

	cont = 0;
	len1 = strleng(s1);
	len2 = strleng(s2);
	while (cont <= len1)
	{
		str[cont] = s1[cont];
		cont++;
	}
	cont = 0;
	while (cont <= len2)
	{
		str[cont + len1] = s2[cont];
		cont++;
	}
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	char	*str;

	len1 = 0;
	len2 = 0;
	if (!s1 || !s2)
		return (NULL);
	len1 = strleng(s1);
	len2 = strleng(s2);
	str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!str)
		return (NULL);
	str = bucle(s1, s2, str);
	return (str);
}
