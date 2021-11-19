/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-blas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 16:56:06 by ade-blas          #+#    #+#             */
/*   Updated: 2021/09/12 12:30:26 by ade-blas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*aux;
	t_list	*prox;

	if (!lst)
		return (NULL);
	prox = (NULL);
	while (lst)
	{
		aux = ft_lstnew(f(lst->content));
		if (!aux)
		{
			ft_lstclear(&prox, del);
			return (0);
		}
		ft_lstadd_back(&prox, aux);
		lst = lst->next;
	}
	return (prox);
}
