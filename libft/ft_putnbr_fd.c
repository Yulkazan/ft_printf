/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulkazan <yulkazan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 20:43:28 by aconcept          #+#    #+#             */
/*   Updated: 2021/01/25 21:05:41 by yulkazan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_powerten(int n)
{
	int	r;

	r = 1;
	while (n / 10 != 0)
	{
		n = n / 10;
		r *= 10;
	}
	return (r);
}

void		ft_putnbr_fd(int n, int fd)
{
	int		p;
	int		sign;
	char	c;

	sign = 1;
	if (n < 0)
	{
		sign = -1;
		write(fd, "-", 1);
	}
	p = ft_powerten(n);
	while (p != 0)
	{
		c = n / (p * sign) + '0';
		write(fd, &c, 1);
		n = n % p;
		p /= 10;
	}
}
