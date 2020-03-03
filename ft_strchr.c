/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 16:54:26 by mathferr          #+#    #+#             */
/*   Updated: 2020/02/10 16:55:12 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && *s != (char)c)
	{
		s++;
	}
	if (*s != (char)c)
		return (NULL);
	else
		return ((char *)s);
}

/*
**int main(void)
**{
**	printf("%s\n", ft_strrchr("braaziil", 'i'));
**	printf("%s\n", strchr("brazil", 'a'));
**	printf("%s\n", strchr("braazil", 'a'));
**	printf("%s\n", strrchr("braazil", 'a'));
**}
*/
