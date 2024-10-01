/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimesan <jaimesan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:54:48 by jaimesan          #+#    #+#             */
/*   Updated: 2024/09/24 16:11:51 by jaimesan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*iter;

	if (lst)
	{
		while (*lst != NULL)
		{
			iter = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = iter;
		}
	}
}
