/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-blas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 13:36:06 by ade-blas          #+#    #+#             */
/*   Updated: 2021/09/12 12:49:33 by ade-blas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	length(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
		x++;
	return (x);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	char			*aux;
	unsigned int	dest_length;
	unsigned int	src_length;
	unsigned int	i;
	unsigned int	total;

	aux = (char *) src;
	dest_length = length(dest);
	src_length = length(aux);
	total = 0;
	i = 0;
	if (size > dest_length)
		total = src_length + dest_length;
	else
		total = src_length + size;
	while (aux[i] && (dest_length + 1) < size)
	{
		dest[dest_length] = aux[i];
		dest_length++;
		i++;
	}
	dest[dest_length] = '\0';
	return (total);
}
