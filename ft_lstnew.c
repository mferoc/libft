/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 01:23:25 by mathferr          #+#    #+#             */
/*   Updated: 2020/02/16 13:58:00 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *n_list;

	n_list = (t_list *)malloc(sizeof(t_list));
	if (n_list == NULL)
		return (NULL);
	n_list->content = content;
	n_list->next = NULL;
	return (n_list);
}
