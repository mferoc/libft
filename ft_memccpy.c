/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 19:14:21 by mathferr          #+#    #+#             */
/*   Updated: 2020/02/15 19:55:20 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*p_dst;
	const unsigned char	*p_src;
	size_t				i;

	i = 0;
	p_dst = (unsigned char *)dst;
	p_src = (const unsigned char *)src;
	while (i < n)
	{
		*p_dst = *p_src;
		if (*p_dst == (unsigned char)c)
			return ((void *)(dst + i + 1));
		p_dst++;
		p_src++;
		i++;
	}
	return (NULL);
}
