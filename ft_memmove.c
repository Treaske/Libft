/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-blas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 12:58:44 by ade-blas          #+#    #+#             */
/*   Updated: 2021/09/12 12:39:38 by ade-blas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*bucle(char *aux, char *aux2, size_t con, size_t n)
{
	while (con < n)
	{
		aux[con] = aux2[con];
		con++;
	}
	return (aux);
}

void	*ft_memmove(void *d, const void *s, size_t n)
{
	size_t	con;
	char	*aux;
	char	*aux2;

	con = 0;
	aux = (char *)d;
	aux2 = (char *)s;
	if (d == (NULL) && s == (NULL))
		return (NULL);
	if (aux > aux2)
	{
		while (n > 0)
		{
			aux[n - 1] = aux2[n - 1];
			n--;
		}
	}
	else if (aux2 > aux)
	{
		aux = bucle(aux, aux2, con, n);
	}
	return (d);
}
