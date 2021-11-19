/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-blas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 18:13:05 by ade-blas          #+#    #+#             */
/*   Updated: 2021/09/12 12:16:35 by ade-blas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;
	size_t	cont;

	cont = 0;
	str = malloc(count * size);
	if (str == NULL)
		return (str);
	while (cont < (count * size))
	{
		str[cont] = 0;
		cont++;
	}
	str[cont] = 0;
	return ((void *)str);
}
