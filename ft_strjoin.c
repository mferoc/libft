/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 16:55:27 by mathferr          #+#    #+#             */
/*   Updated: 2020/02/13 15:59:29 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *str_joined;

	str_joined = NULL;
	if (s1 && s2)
		str_joined = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (str_joined == NULL)
		return (NULL);
	else
	{
		ft_strcpy(str_joined, (char *)s1);
		ft_strcat(str_joined, (char *)s2);
	}
	return (str_joined);
}

/*
**int main(void)
**{
**	printf("%s\n", ft_strjoin("Brasil", "-COMUNISTA"));
**	return (0);
**}
*/
