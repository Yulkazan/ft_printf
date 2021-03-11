/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulkazan <yulkazan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 19:58:52 by yulkazan          #+#    #+#             */
/*   Updated: 2021/02/01 21:49:56 by yulkazan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_print_string(va_list *list, t_struct *args)
{
	char	*s;
	int		num;
	int		len;

	num = 0;
	s = va_arg(*list, char *);
	if (s == NULL)
		s = "(null)\0";
	len = ft_strlen(s);
	if (args->prec >= 0 && len > args->prec)
		len = args->prec;
	if (!(args->minus))
		num += ft_print_zero_space(args->width - len, ' ');
	num += ft_putstr_len(s, len);
	if (args->minus)
		num += ft_print_zero_space(args->width - len, ' ');
	return (num);
}
