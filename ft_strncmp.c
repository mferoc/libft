/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 16:46:04 by mathferr          #+#    #+#             */
/*   Updated: 2020/02/17 01:11:49 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int		i;
	const unsigned char	*p_s1;
	const unsigned char	*p_s2;

	if (n == 0)
		return (0);
	i = 0;
	p_s1 = (const unsigned char *)s1;
	p_s2 = (const unsigned char *)s2;
	while (*p_s1 && *p_s2 && *p_s1 == *p_s2 && ++i < n)
	{
		p_s1++;
		p_s2++;
	}
	return ((int)(*p_s1 - *p_s2));
}
