/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulkazan <yulkazan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 14:12:16 by aconcept          #+#    #+#             */
/*   Updated: 2021/01/25 21:05:54 by yulkazan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	unsigned char	s;

	s = ch;
	if (*str == ch)
		return ((char *)str);
	if (*str == '\0')
		return (NULL);
	while (*str++)
		if (*str == s)
			return ((char *)str);
	return (NULL);
}
