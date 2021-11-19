/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-blas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 12:12:10 by ade-blas          #+#    #+#             */
/*   Updated: 2021/09/12 12:36:39 by ade-blas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	con;
	char	*aux;
	char	*aux2;

	con = 0;
	aux = (char *)dst;
	aux2 = (char *)src;
	if (dst == (NULL) && src == (NULL))
		return (NULL);
	while (con < n)
	{
		aux[con] = aux2[con];
		con++;
	}
	return (aux);
}
