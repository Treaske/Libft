/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-blas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 14:56:10 by ade-blas          #+#    #+#             */
/*   Updated: 2021/09/12 12:43:54 by ade-blas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr( char *s, int c)
{
	char	*aux;

	aux = (char *)s;
	while (*aux != (unsigned char)c)
	{
		if (*aux == '\0')
			return (NULL);
		aux++;
	}
	return (aux);
}
