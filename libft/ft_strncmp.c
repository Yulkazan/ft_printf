/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulkazan <yulkazan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 14:16:47 by aconcept          #+#    #+#             */
/*   Updated: 2021/01/25 21:06:35 by yulkazan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned char	*l1;
	unsigned char	*l2;
	size_t			i;

	l1 = (unsigned char *)str1;
	l2 = (unsigned char *)str2;
	i = 0;
	while (i < n && (l1[i] || l2[i]))
	{
		if (l1[i] != l2[i])
			return (l1[i] - l2[i]);
		i++;
	}
	return (0);
}
