/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimesan <jaimesan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 09:34:26 by jaimesan          #+#    #+#             */
/*   Updated: 2024/09/23 13:15:27 by jaimesan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	char	*mem;

	mem = malloc(num_elements * element_size);
	if (mem == NULL)
		return (mem);
	ft_bzero(mem, num_elements * element_size);
	return (mem);
}
