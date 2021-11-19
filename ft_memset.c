/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-blas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 17:03:50 by ade-blas          #+#    #+#             */
/*   Updated: 2021/09/12 12:41:33 by ade-blas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			cont;
	unsigned char	*aux;

	aux = b;
	cont = 0;
	if (len > 0)
	{
		while (cont < len)
		{
			aux[cont] = (unsigned char)c;
			cont++;
		}
	}
	return (b);
}
