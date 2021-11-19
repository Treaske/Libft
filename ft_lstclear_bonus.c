/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-blas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 15:37:27 by ade-blas          #+#    #+#             */
/*   Updated: 2021/09/12 12:27:49 by ade-blas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;
	t_list	*lista;

	lista = *lst;
	if (!lst || !del)
		return ;
	while (lista)
	{
		aux = lista->next;
		del(lista->content);
		free(lista);
		lista = aux;
	}
	*lst = (NULL);
}
