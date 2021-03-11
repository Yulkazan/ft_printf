/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulkazan <yulkazan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 14:19:08 by aconcept          #+#    #+#             */
/*   Updated: 2021/01/25 21:06:41 by yulkazan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char *s;

	s = (char *)str + ft_strlen(str);
	while (str <= s)
	{
		if (*s == ch)
			return ((char *)s);
		s--;
	}
	return (NULL);
}
