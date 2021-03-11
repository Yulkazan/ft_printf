/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_nums.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulkazan <yulkazan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 19:59:28 by yulkazan          #+#    #+#             */
/*   Updated: 2021/01/28 02:26:30 by yulkazan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putstr_len_mem(char *s, int end)
{
	int	num;
	int	i;

	num = 0;
	i = 0;
	while (s[i] && i < end)
	{
		num += write(1, &s[i], 1);
		i++;
	}
	free(s);
	return (num);
}

static int	ft_check_if_zero(t_struct *args, int number, int length)
{
	if (args->prec == 0 && number == 0)
		return (0);
	else
		return (length);
}

long long	ft_print_num(size_t number, t_struct *args, int base)
{
	int		num;
	char	*s;
	int		len;

	num = 0;
	s = ft_itoa_base(number, base);
	len = ft_strlen(s);
	if (args->type == 'x' || args->type == 'p')
		s = ft_str_lower(&s);
	len = ft_check_if_zero(args, number, len);
	args->width -= (ft_max(len, args->prec) + args->neg + args->point * 2);
	if ((!args->minus && !args->zero) || (!args->minus && args->prec >= 0))
		num += ft_print_zero_space(args->width, ' ');
	if (args->neg == 1)
		num += write(1, "-", 1);
	if (args->point)
		num += ft_print_0x();
	if (!args->minus && args->zero && args->prec < 0)
		num += ft_print_zero_space(args->width, '0');
	if (args->prec > len)
		num += ft_print_zero_space(args->prec - len, '0');
	num += ft_putstr_len_mem(s, len);
	if (args->minus)
		num += ft_print_zero_space(args->width, ' ');
	return (num);
}
