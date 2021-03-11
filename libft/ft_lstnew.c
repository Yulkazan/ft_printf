/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulkazan <yulkazan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 21:49:29 by aconcept          #+#    #+#             */
/*   Updated: 2021/01/25 21:04:52 by yulkazan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*cur;

	cur = malloc(sizeof(t_list));
	if (!cur)
		return (NULL);
	cur->content = content;
	cur->next = NULL;
	return (cur);
}
