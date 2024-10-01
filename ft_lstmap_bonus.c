/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimesan <jaimesan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 09:52:01 by jaimesan          #+#    #+#             */
/*   Updated: 2024/10/01 10:19:40 by jaimesan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*iter;
	t_list	*end;
	void	*content;

	iter = NULL;
	if (lst == NULL || f == NULL)
		return (NULL);
	while (lst != NULL)
	{
		content = f(lst->content);
		end = ft_lstnew(content);
		if (end == NULL)
		{
			del(content);
			ft_lstclear(&iter, del);
			return (NULL);
		}
		ft_lstadd_back(&iter, end);
		lst = lst->next;
	}
	return (iter);
}
