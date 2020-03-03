/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 16:58:43 by mathferr          #+#    #+#             */
/*   Updated: 2020/02/13 18:15:10 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t ini_dst;
	size_t i;

	ini_dst = ft_strlen(dst);
	i = 0;
	if (dstsize <= ini_dst)
		return (dstsize + ft_strlen(src));
	while (src[i] != '\0' && ini_dst + i < (dstsize - 1))
	{
		dst[ini_dst + i] = src[i];
		i++;
	}
	dst[ini_dst + i] = '\0';
	return (ft_strlen(src) + ini_dst);
}

/*
**int main(void)
**{
**	char dest[10];
**    const char src[6] = "BRAZA";
**	printf("%ld\n", ft_strlcat(dest, src, 2));
**	printf("%s\n", dest);
**    printf("%s\n", src);
**	//testing dest
**
**	//printf("%ld\n", strlcat(dest, "BRAZA", 3));
**  printf("%s\n", dest);
**	printf("%s\n", src);
**
**}
*/
