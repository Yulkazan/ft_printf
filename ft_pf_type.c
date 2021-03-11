/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_type.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulkazan <yulkazan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 20:00:05 by yulkazan          #+#    #+#             */
/*   Updated: 2021/01/28 02:37:38 by yulkazan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_type_num(va_list list, t_struct *args)
{
	long int	num_i;
	size_t		num_t;

	if (args->type == 'd' || args->type == 'i')
	{
		num_i = va_arg(list, int);
		if (num_i >= 0)
			num_t = num_i;
		else
		{
			args->neg = 1;
			num_t = -num_i;
		}
		return (ft_print_num(num_t, args, 10));
	}
	else if (args->type == 'x' || args->type == 'X' || args->type == 'u')
	{
		num_t = va_arg(list, unsigned int);
		if (args->type == 'u')
			return (ft_print_num(num_t, args, 10));
		else
			return (ft_print_num(num_t, args, 16));
	}
	return (0);
}

int			ft_print_type(va_list *list, t_struct *args)
{
	int num;

	num = 0;
	if (args->type == 's')
		num += ft_print_string(list, args);
	else if (args->type == '%')
		num += ft_print_percent(args);
	else if (args->type == 'c')
		num += ft_print_char(list, args);
	else if (args->type == 'p')
	{
		args->point = 1;
		num += ft_print_pointer(list, args);
	}
	else if (args->type == 'd' || args->type == 'i'
			|| args->type == 'x' || args->type == 'X'
			|| args->type == 'u')
		num += ft_print_type_num(*list, args);
	else
		return (0);
	return (num);
}
