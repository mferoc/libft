/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 17:03:34 by mathferr          #+#    #+#             */
/*   Updated: 2020/02/10 17:34:53 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

	if (!dst || !src)
		return (0);
	if (dstsize == 0)
		return (ft_strlen(src));
	len = 0;
	while (src[len] && len < dstsize - 1)
	{
		dst[len] = src[len];
		len++;
	}
	dst[len] = '\0';
	return (ft_strlen(src));
}

/*
**int main(void)
**{
**	char dest[10];
**	printf("%ld\n", ft_strlcpy(dest, "BRAZA", 3));
**	printf("%s\n", dest);
**	 testing dest
**
**	//printf("%ld\n", strlcpy(dest, "BRAZA", 3));
**	//printf("%s\n", dest);
**}
*/
