/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulkazan <yulkazan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 04:06:41 by aconcept          #+#    #+#             */
/*   Updated: 2021/01/25 21:05:16 by yulkazan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char		*l1;
	const unsigned char	*l2;

	if (dest == src)
		return (dest);
	l1 = (unsigned char *)dest;
	l2 = (unsigned char *)src;
	while (len--)
		*l1++ = *l2++;
	return (dest);
}
