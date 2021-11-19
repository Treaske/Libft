/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-blas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 13:14:46 by ade-blas          #+#    #+#             */
/*   Updated: 2021/09/12 12:50:17 by ade-blas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	ft_strlcpy(char *d, const char *s, size_t n)
{
	unsigned int	y;
	unsigned int	x;
	char			*aux;

	y = 0;
	x = 0;
	aux = (char *)s;
	if (n <= 0)
		return (ft_strlen(aux));
	while (s[y] != '\0')
		y++;
	while (x < n - 1 && s[x] != '\0')
	{
		d[x] = s[x];
		x++;
	}
	d[x] = '\0';
	return (y);
}
