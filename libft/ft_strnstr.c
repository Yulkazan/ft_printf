/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconcept <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 14:17:30 by aconcept          #+#    #+#             */
/*   Updated: 2020/11/18 21:01:50 by aconcept         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	lil_len;

	if (!(*little))
		return ((char *)big);
	lil_len = ft_strlen(little);
	while (*big && len-- >= lil_len)
	{
		if (!(ft_strncmp(big, little, lil_len)))
			return ((char *)big);
		big++;
	}
	return (NULL);
}
