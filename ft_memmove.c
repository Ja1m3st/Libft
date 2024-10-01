/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimesan <jaimesan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 11:05:43 by jaimesan          #+#    #+#             */
/*   Updated: 2024/09/30 10:36:32 by jaimesan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*srcs;

	dst = (unsigned char *)dest;
	srcs = (unsigned char *)src;
	if (dst > srcs)
	{
		while (n--)
			dst[n] = srcs[n];
	}
	else if (dst < srcs)
		ft_memcpy(dest, src, n);
	return (dest);
}
