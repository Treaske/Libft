/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-blas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 12:05:44 by ade-blas          #+#    #+#             */
/*   Updated: 2021/09/12 12:55:15 by ade-blas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	cont;
	unsigned int	cont2;
	char			*aux;

	cont = start;
	cont2 = 0;
	if (!s)
		return (0);
	while (cont2 < len && s[cont++])
		cont2++;
	aux = malloc(sizeof(char) * (cont2 + 1));
	if (aux == (NULL))
		return (NULL);
	cont = start;
	cont2 = 0;
	while (cont2 < len && cont < ft_strlen((char *)s))
	{
		aux[cont2] = s[cont];
		cont++;
		cont2++;
	}
	aux[cont2] = '\0';
	return (aux);
}
