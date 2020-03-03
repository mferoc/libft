/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 21:21:01 by mathferr          #+#    #+#             */
/*   Updated: 2020/02/10 16:48:38 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int big_nb;

	big_nb = n;
	if (big_nb < 0)
	{
		ft_putchar_fd(45, fd);
		big_nb = (big_nb * -1);
	}
	if (big_nb >= 10)
	{
		ft_putnbr_fd(big_nb / 10, fd);
		ft_putchar_fd((big_nb % 10) + '0', fd);
	}
	else
	{
		ft_putchar_fd(big_nb + '0', fd);
	}
}
/*
**int main(void)
**{
**	ft_putnbr_fd(585454, 1);
**	ft_putchar_fd(10, 1);
**	ft_putnbr_fd(2147483647, 1);
**	ft_putchar_fd(10, 1);
**	ft_putnbr_fd(-2147483648, 1);
**
**	return 0;
**}
*/
