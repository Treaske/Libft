/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-blas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 15:08:28 by ade-blas          #+#    #+#             */
/*   Updated: 2021/09/12 12:54:18 by ade-blas         ###   ########.fr       */
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

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*aux;
	char	*str;
	int		len;

	str = (char *)s1;
	if (!s1 || !set)
		return (NULL);
	while (*str && ft_strchr((char *)set, *str))
		str++;
	len = strleng(str);
	while (len && ft_strchr((char *)set, str[len]))
		len--;
	aux = ft_substr((char *)str, 0, len + 1);
	return (aux);
}
