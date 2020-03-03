/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 00:16:56 by mathferr          #+#    #+#             */
/*   Updated: 2020/02/16 01:16:20 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	str_is_in_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int				i;
	unsigned int	str_trimed_len;
	char			*str_trimed;
	char			*start_to_trim;
	char			*end_to_trim;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && str_is_in_set(s1[i], set))
		i++;
	start_to_trim = (char *)&s1[i];
	if ((i = ft_strlen(s1) - 1) != -1)
		while (i >= 0 && str_is_in_set(s1[i], set))
			i--;
	end_to_trim = (char *)&s1[i];
	if (!*s1 || end_to_trim == start_to_trim)
		str_trimed_len = 2;
	else
		str_trimed_len = (end_to_trim - start_to_trim) + 2;
	if (!(str_trimed = malloc(sizeof(char) * str_trimed_len)))
		return (NULL);
	ft_strlcpy(str_trimed, start_to_trim, str_trimed_len);
	return (str_trimed);
}
