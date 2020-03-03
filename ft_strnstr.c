/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 19:12:45 by mathferr          #+#    #+#             */
/*   Updated: 2020/02/15 18:34:11 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	size_t			needle_len;

	if (*needle == '\0')
		return (char*)(haystack);
	i = 0;
	needle_len = ft_strlen(needle);
	while (*haystack != '\0')
	{
		if (i + needle_len > len)
			return (NULL);
		if (ft_strncmp(haystack, needle, needle_len) == 0)
			return (char*)(haystack);
		haystack++;
		i++;
	}
	return (NULL);
}
