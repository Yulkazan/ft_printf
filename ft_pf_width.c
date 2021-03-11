/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_width.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulkazan <yulkazan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 20:00:12 by yulkazan          #+#    #+#             */
/*   Updated: 2021/01/28 02:24:47 by yulkazan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_is_width(va_list *list, const char *s, int i, t_struct *args)
{
	int	num;

	num = 0;
	if (s[i] == 0 && args->minus)
		i++;
	if (s[i] == '*')
	{
		args->width = va_arg(*list, int);
		num = 1;
	}
	else if (ft_isdigit(s[i]))
		while (ft_isdigit(s[i]))
		{
			args->width = args->width * 10 + (s[i] - '0');
			i++;
			num++;
		}
	if (args->width < 0)
	{
		args->minus = 1;
		args->width = -args->width;
	}
	args->count += num;
	return (num);
}
