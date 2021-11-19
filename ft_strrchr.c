/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-blas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 16:06:27 by ade-blas          #+#    #+#             */
/*   Updated: 2021/09/12 12:53:47 by ade-blas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*aux;

	aux = s;
	while (*aux)
		aux++;
	if (c == '\0')
		return ((char *)aux);
	while (aux >= s)
	{
		if ((unsigned char)c == *aux)
			return ((char *)aux);
		aux--;
	}
	return (NULL);
}
