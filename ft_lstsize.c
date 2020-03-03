/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 01:47:54 by mathferr          #+#    #+#             */
/*   Updated: 2020/02/16 01:55:11 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int lst_size;

	if (!lst)
		return (0);
	lst_size = 1;
	while (lst->next != 0)
	{
		lst = lst->next;
		lst_size++;
	}
	return (lst_size);
}
