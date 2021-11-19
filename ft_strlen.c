/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-blas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 16:30:02 by ade-blas          #+#    #+#             */
/*   Updated: 2021/09/12 12:50:56 by ade-blas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	ft_strlen(const char *frase)
{
	unsigned long	cont;

	cont = 0;
	while (frase[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}
