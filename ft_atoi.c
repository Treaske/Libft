/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-blas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 17:45:57 by ade-blas          #+#    #+#             */
/*   Updated: 2021/11/03 16:08:10 by ade-blas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	num;
	int	sign;
	int	cont;

	num = 0;
	sign = 1;
	cont = 0;
	while (*str == ' ' || *str == '\t' || *str == '\f'
		|| *str == '\r' || *str == '\n' || *str == '\v')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (str[cont] >= '0' && str[cont] <= '9')
	{
		num = (num * 10) + (str[cont] - 48);
		cont++;
	}
	return (num * sign);
}
