/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 21:17:12 by mathferr          #+#    #+#             */
/*   Updated: 2020/02/12 17:37:49 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, char *src)
{
	char *p_dest;

	p_dest = dest + ft_strlen(dest);
	while (*src != '\0')
	{
		*p_dest++ = *src++;
	}
	*p_dest = '\0';
	return (dest);
}

/*
**int main(void)
**{
**	char src[] = "umas ferias.";
**	char dest[80] = "Quero muito ";
**
**	char src_original[] = "umas ferias.";
**	char dest_original[80] = "Quero muito ";
**
**	printf("src: %s\n", src);
**	printf("dest: %s\n", dest);
**	printf("ft_strcat: %s\n", ft_strcat_bonus(dest, src));
**	printf("strcat: %s\n", strcat(dest_original, src_original));
**	return (0);
**}
*/
