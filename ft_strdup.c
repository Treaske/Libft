/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-blas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 18:53:21 by ade-blas          #+#    #+#             */
/*   Updated: 2021/09/12 12:47:53 by ade-blas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		len;
	int		cont;

	len = 0;
	cont = 0;
	while (s1[len] != '\0')
		len++;
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (s1[cont] != '\0')
	{
		str[cont] = s1[cont];
		cont++;
	}
	str[cont] = '\0';
	return (str);
}
