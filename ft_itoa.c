/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-blas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:22:59 by ade-blas          #+#    #+#             */
/*   Updated: 2021/09/12 12:26:05 by ade-blas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	leng(int n)
{
	int			len;
	long int	n2;

	n2 = (long) n;
	len = 0;
	if (n2 < 0)
	{
		n2 = n2 * -1;
		len++;
	}
	while (n2 > 0)
	{
		n2 = n2 / 10;
		len++;
	}
	if (n == 0)
		len = 1;
	return (len);
}

static char	*negative(char *num, int n, int len)
{
	int			len2;
	long int	min;

	min = (long) n;
	len2 = len;
	num[0] = '-';
	min = min * -1;
	while (min > 0)
	{
		num[len - 1] = 48 + (min % 10);
		min = min / 10;
		len--;
	}
	return (num);
}

static char	*positive(int len, int n, char *num)
{
	while (n > 0)
	{
		num[len - 1] = 48 + (n % 10);
		n = n / 10;
		len--;
	}
	return (num);
}

char	*ft_itoa(int n)
{
	char			*num;
	int				len;

	len = leng(n);
	num = malloc(sizeof(char) * (len + 1));
	if (num == (NULL))
		return (NULL);
	if (n == 0 || n == -0)
	{
		num[0] = 48;
	}
	if (n < 0)
		num = negative(num, n, len);
	if (n > 0)
		num = positive(len, n, num);
	num[len] = '\0';
	return (num);
}
