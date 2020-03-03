/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 17:05:35 by mathferr          #+#    #+#             */
/*   Updated: 2020/02/16 17:10:50 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			digits(int n)
{
	int div;
	int len;

	len = 1;
	div = n / 10;
	if (div != 0)
		while (div != 0)
		{
			div = div / 10;
			len++;
		}
	return (len);
}

static unsigned int	abs_number(int n)
{
	unsigned int n_abs;

	if (n < 0)
		n_abs = -n;
	else
		n_abs = n;
	return (n_abs);
}

char				*ft_itoa(int n)
{
	char			*c;
	int				len;
	unsigned int	n_maior;

	len = digits(n) + 1;
	if (n < 0)
		len++;
	c = (char*)malloc(len * sizeof(char));
	if (c == NULL)
		return (NULL);
	else
	{
		n_maior = abs_number(n);
		if (n < 0)
			c[0] = 45;
		c[len - 1] = '\0';
		while ((n_maior / 10) != 0)
		{
			c[len - 2] = '0' + (n_maior % 10);
			n_maior = n_maior / 10;
			len--;
		}
		c[len - 2] = '0' + (n_maior % 10);
	}
	return (c);
}
