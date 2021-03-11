/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulkazan <yulkazan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 21:57:28 by aconcept          #+#    #+#             */
/*   Updated: 2021/01/25 21:05:49 by yulkazan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_free_all(char **mas)
{
	int i;

	i = 0;
	while (mas[i] != NULL)
	{
		free(mas[i]);
		++i;
	}
	free(mas);
	return (NULL);
}

size_t		ft_count_words(char const *s, char c)
{
	size_t count;
	size_t i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

char		*one_word(char const *sn, char c)
{
	char	*word;
	size_t	size;
	size_t	i;

	size = 0;
	i = 0;
	while (sn[size] && sn[size] != c)
		size++;
	word = (char *)malloc(size + 1);
	while (size > i)
	{
		word[i] = sn[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char		**ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	str = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[j])
	{
		if (s[j] != c)
		{
			str[i] = one_word(&s[j], c);
			if (str[i] == NULL)
				return (ft_free_all(str));
			j += ft_strlen(str[i++]);
		}
		else
			j++;
	}
	str[i] = 0;
	return (str);
}
