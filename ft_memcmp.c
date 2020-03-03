/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 16:11:36 by mathferr          #+#    #+#             */
/*   Updated: 2020/02/12 16:42:24 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*p_s1;
	const unsigned char	*p_s2;

	if (n == 0)
		return (0);
	p_s1 = (const unsigned char*)s1;
	p_s2 = (const unsigned char*)s2;
	i = 0;
	while (*p_s1 == *p_s2 && ++i < n)
	{
		p_s1++;
		p_s2++;
	}
	return ((int)(*p_s1 - *p_s2));
}
