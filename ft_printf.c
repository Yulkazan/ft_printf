/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulkazan <yulkazan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 20:00:20 by yulkazan          #+#    #+#             */
/*   Updated: 2021/02/01 21:48:38 by yulkazan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int				ft_printf(const char *s, ...)
{
	va_list	args;
	int		num;

	va_start(args, s);
	num = ft_write(s, &args);
	va_end(args);
	return (num);
}
