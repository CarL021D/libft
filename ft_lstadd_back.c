/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caboudar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:23:14 by caboudar          #+#    #+#             */
/*   Updated: 2022/06/01 18:06:03 by caboudar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	if (!lst || !new)
		return ;
	if (!(*lst))
	{
		*lst = new;
		(*lst)->next = NULL;
	}
	else
	{
		node = (*lst);
		while (node->next)
			node = node->next;
		node->next = new;
	}
}
