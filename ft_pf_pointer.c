/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulkazan <yulkazan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 19:59:41 by yulkazan          #+#    #+#             */
/*   Updated: 2021/01/28 02:23:27 by yulkazan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_print_pointer(va_list *list, t_struct *args)
{
	size_t	pointer;
	int		num;

	num = 0;
	pointer = (size_t)va_arg(*list, void *);
	num += ft_print_num(pointer, args, 16);
	return (num);
}
