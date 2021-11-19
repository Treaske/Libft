/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-blas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 16:52:14 by ade-blas          #+#    #+#             */
/*   Updated: 2021/09/12 12:53:07 by ade-blas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystac, const char *needl, size_t len)
{
	int		cont;
	size_t	cont2;
	int		wlen;

	cont = 0;
	cont2 = 0;
	wlen = ft_strlen((char *)needl);
	if (wlen == 0)
		return ((char *)haystac);
	while (*haystac && cont2 <= len)
	{
		while (haystac[cont] == needl[cont] && (cont + cont2) < len)
		{
			if (needl[cont + 1] == '\0')
				return ((char *)haystac);
			cont++;
		}
		cont = 0;
		haystac++;
		cont2++;
	}
	return (NULL);
}
