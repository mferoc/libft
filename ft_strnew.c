/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 21:28:14 by mathferr          #+#    #+#             */
/*   Updated: 2020/03/04 21:31:07 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
    char    *s;

    if(!(s = (char *)malloc((size + 1) * sizeof(char))))
    {
        return (NULL);
    }
    ft_memset(s, '\0', size);
    return (s);
}