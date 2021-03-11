/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_prec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulkazan <yulkazan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 19:59:55 by yulkazan          #+#    #+#             */
/*   Updated: 2021/01/28 02:24:32 by yulkazan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_is_prec(va_list *list, const char *s, int i, t_struct *args)
{
	int	num;

	num = 0;
	if (s[i] == '.')
	{
		i++;
		num++;
	}
	else
		return (0);
	args->prec = 0;
	if (s[i] == '*')
	{
		args->prec = va_arg(*list, int);
		num += 1;
	}
	else if (ft_isdigit(s[i]))
		while (ft_isdigit(s[i]))
		{
			args->prec = args->prec * 10 + (s[i] - '0');
			i++;
			num++;
		}
	args->count += num;
	return (num);
}
