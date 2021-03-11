/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulkazan <yulkazan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 05:14:45 by aconcept          #+#    #+#             */
/*   Updated: 2021/01/25 21:05:22 by yulkazan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char		*l1;
	unsigned char		*last1;
	const unsigned char	*l2;

	l1 = (unsigned char *)dest;
	l2 = (const unsigned char *)src;
	if (dest == src)
		return (dest);
	if (l1 < l2)
		while (len-- > 0)
			*l1++ = *l2++;
	else
	{
		last1 = l1 + (len - 1);
		l2 += (len - 1);
		while (len-- > 0)
			*last1-- = *l2--;
	}
	return (dest);
}
