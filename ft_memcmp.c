/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-blas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 17:31:39 by ade-blas          #+#    #+#             */
/*   Updated: 2021/09/12 12:35:54 by ade-blas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				diff;
	unsigned int	x;
	unsigned char	*aux_dest;
	unsigned char	*aux_src;

	x = 0;
	diff = 0;
	aux_dest = (unsigned char *)s1;
	aux_src = (unsigned char *)s2;
	while (x < n)
	{
		if (aux_dest[x] != aux_src[x])
		{
			diff = aux_dest[x] - aux_src[x];
			return (diff);
		}
		x++;
	}
	return (diff);
}
