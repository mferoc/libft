/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 19:59:36 by mathferr          #+#    #+#             */
/*   Updated: 2020/02/15 20:19:09 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*f_str;
	int		i;
	int		s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	f_str = (char *)malloc((s_len + 1) * sizeof(char));
	if (!f_str)
		return (NULL);
	i = 0;
	f_str[s_len] = '\0';
	while (s[i] != '\0' && f)
	{
		f_str[i] = (*f)(i, s[i]);
		i++;
	}
	return (f_str);
}
