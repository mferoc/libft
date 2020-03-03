/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 18:28:15 by mathferr          #+#    #+#             */
/*   Updated: 2020/02/11 18:52:03 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char			*p_dst;
	const unsigned char		*p_src;

	p_dst = (unsigned char *)dst;
	p_src = (unsigned char *)src;
	if (src == dst)
		return (dst);
	while (n-- > 0)
		*(p_dst++) = *(p_src++);
	return (dst);
}
