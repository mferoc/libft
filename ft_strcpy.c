/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 21:18:07 by mathferr          #+#    #+#             */
/*   Updated: 2020/02/12 17:37:20 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
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
**	printf("ft_strcpy: %s\n", ft_strcpy_bonus(dest, src));
**	printf("strcpy: %s\n", strcpy(dest_original, src_original));
**	return (0);
**}
*/
