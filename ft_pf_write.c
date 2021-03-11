/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_write.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulkazan <yulkazan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 01:57:42 by yulkazan          #+#    #+#             */
/*   Updated: 2021/02/01 21:50:57 by yulkazan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int				ft_write(const char *s, va_list *list)
{
	int			i;
	t_struct	args;
	int			num;

	num = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			args = ft_create_args();
			num += ft_is_flag_type(list, s, i, &args);
			i += args.count;
		}
		else
		{
			num += write(1, &s[i], 1);
			i++;
		}
	}
	return (num);
}
