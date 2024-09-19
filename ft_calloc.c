/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimesanchez <jaimesanchez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 20:46:59 by jaimesanche       #+#    #+#             */
/*   Updated: 2024/09/19 14:12:09 by jaimesanche      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	char	*mem;

	mem = malloc(num_elements * element_size);
	if (men == NULL)
		return (NULL);
	ft_bzero(mem, num_elements * element_size);
	return (mem);
}
