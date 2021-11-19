/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   striteri.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-blas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 17:09:09 by ade-blas          #+#    #+#             */
/*   Updated: 2021/09/12 12:48:08 by ade-blas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	cont;

	if (s == NULL || f == NULL)
		return ;
	cont = 0;
	while (s[cont] != '\0')
	{
		f(cont, &s[cont]);
		cont++;
	}
}
