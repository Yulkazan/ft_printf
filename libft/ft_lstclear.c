/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulkazan <yulkazan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 21:36:51 by aconcept          #+#    #+#             */
/*   Updated: 2021/01/25 21:04:32 by yulkazan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*first;

	while (*lst != NULL)
	{
		first = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = first;
	}
	free(*lst);
	first = NULL;
	lst = NULL;
}
