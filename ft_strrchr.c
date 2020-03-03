/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 17:06:16 by mathferr          #+#    #+#             */
/*   Updated: 2020/02/10 17:06:50 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == c)
			last = (char *)s;
		s++;
	}
	if (c == *s)
		return ((char *)s);
	return (last);
}

/*
**int main(void)
**{
**	printf("ft = %s\n", ft_strrchr("braazil", 'a'));
**	printf("strchr = %s\n", strchr("braazil", 'a'));
**	printf("strRchr = %s\n", strrchr("braazil", 'a'));
**}
*/
