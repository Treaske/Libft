/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putendl_fd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-blas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 18:48:23 by ade-blas          #+#    #+#             */
/*   Updated: 2021/09/12 12:42:04 by ade-blas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	len;

	if (!s || !fd)
		return ;
	len = 0;
	while (s[len] != '\0')
	{
		write(fd, &s[len], 1);
		len++;
	}
	ft_putchar_fd('\n', fd);
}
