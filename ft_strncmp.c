/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-blas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 16:32:27 by ade-blas          #+#    #+#             */
/*   Updated: 2021/09/12 12:52:25 by ade-blas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	x;

	x = 0;
	while (x < n && (s1[x] != '\0' && s2[x] != '\0'))
	{
		if (s1[x] != s2[x])
		{
			return ((unsigned char)s1[x] - s2[x]);
		}
		x++;
	}
	if (x != n)
		return ((unsigned char)s1[x] - s2[x]);
	return (0);
}
