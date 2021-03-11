/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulkazan <yulkazan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 21:26:30 by aconcept          #+#    #+#             */
/*   Updated: 2021/01/25 21:04:22 by yulkazan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		number(int n)
{
	int count;

	count = 1;
	while (n / 10 != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		num;
	int		i;
	int		sign;

	sign = 0;
	if (n < 0)
		sign = 1;
	num = number(n);
	str = (char *)malloc(num + sign + 1);
	if (!str)
		return (NULL);
	if (sign)
		str[0] = '-';
	i = num + sign - 1;
	while (i >= sign)
	{
		if (sign)
			str[i--] = (n % 10) * (-1) + 48;
		else
			str[i--] = n % 10 + 48;
		n /= 10;
	}
	str[num + sign] = '\0';
	return (str);
}
