/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulkazan <yulkazan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 22:11:47 by aconcept          #+#    #+#             */
/*   Updated: 2021/01/25 21:06:45 by yulkazan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	char_in_set(char c, char const *set)
{
	size_t j;

	j = 0;
	while (set[j])
	{
		if (c == set[j])
			return (1);
		j++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	end;
	size_t	begin;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && char_in_set(s1[i], set))
		i++;
	begin = i;
	if (begin == ft_strlen(s1))
		return (ft_calloc(1, 1));
	i = ft_strlen(s1);
	while (s1[i - 1] && char_in_set(s1[i - 1], set))
		i--;
	end = i;
	str = ft_calloc(1, end - begin + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (begin < end)
		str[i++] = s1[begin++];
	str[i] = '\0';
	return (str);
}
