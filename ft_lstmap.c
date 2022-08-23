/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caboudar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:00:50 by caboudar          #+#    #+#             */
/*   Updated: 2022/06/01 19:24:31 by caboudar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_l;
	t_list	*data;

	if (!lst)
		return (NULL);
	new_l = NULL;
	while (lst)
	{
		data = ft_lstnew(f(lst->content));
		if (!data)
		{
			ft_lstclear(&new_l, del);
			return (NULL);
		}
		ft_lstadd_back(&new_l, data);
		lst = lst->next;
	}
	return (new_l);
}
