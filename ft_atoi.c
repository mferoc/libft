/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 18:22:49 by mathferr          #+#    #+#             */
/*   Updated: 2020/02/16 20:15:30 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int			signal;
	long int	n;
	long int	aux;

	signal = 1;
	n = 0;
	aux = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			signal *= -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		n = n * 10 + (*str++ - '0');
		if (aux > n)
		{
			return (signal > 0 ? -1 : 0);
		}
		aux = n;
	}
	return (n * signal);
}
