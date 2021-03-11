/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_percent.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulkazan <yulkazan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 19:59:35 by yulkazan          #+#    #+#             */
/*   Updated: 2021/01/27 19:59:36 by yulkazan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int				ft_print_percent(t_struct *args)
{
	int	num;

	num = 0;
	if (!args->minus && !args->zero)
		num += ft_print_zero_space(args->width - 1, ' ');
	if (!args->minus && args->zero)
		num += ft_print_zero_space(args->width - 1, '0');
	num += write(1, "%", 1);
	if (args->minus)
		num += ft_print_zero_space(args->width - 1, ' ');
	return (num);
}
