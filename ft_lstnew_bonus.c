/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-blas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 13:24:41 by ade-blas          #+#    #+#             */
/*   Updated: 2021/09/12 12:30:42 by ade-blas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newlist;

	newlist = malloc(sizeof(*newlist));
	if (!newlist)
		return (NULL);
	newlist->content = content;
	newlist->next = (NULL);
	return (newlist);
}
