/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulkazan <yulkazan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 14:09:51 by aconcept          #+#    #+#             */
/*   Updated: 2021/01/25 21:05:09 by yulkazan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *l1, const void *l2, size_t len)
{
	unsigned const char	*first;
	unsigned const char	*second;

	first = (unsigned const char *)l1;
	second = (unsigned const char *)l2;
	while (len-- > 0)
		if (*first++ != *second++)
			return (first[-1] - second[-1]);
	return (0);
}
