/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 16:56:38 by mathferr          #+#    #+#             */
/*   Updated: 2020/02/16 17:01:06 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;

	if (!del)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		aux = *lst;
		*lst = aux->next;
		free(aux);
	}
	*lst = NULL;
}
