/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulkazan <yulkazan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 04:52:09 by aconcept          #+#    #+#             */
/*   Updated: 2021/01/25 21:05:00 by yulkazan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t len)
{
	unsigned char		*l1;
	const unsigned char	*l2;
	unsigned char		ch;

	l1 = (unsigned char *)dest;
	l2 = (const unsigned char *)src;
	ch = (unsigned char)c;
	while (len-- > 0)
	{
		*l1++ = *l2++;
		if (*(l1 - 1) == ch)
			return (l1);
	}
	return (NULL);
}
