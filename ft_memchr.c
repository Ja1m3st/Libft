/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimesan <jaimesan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:29:29 by jaimesan          #+#    #+#             */
/*   Updated: 2024/09/17 15:48:21 by jaimesan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	c;

	str = (unsigned char *)ptr;
	c = (unsigned char)value;
	i = 0;
	while (i < num)
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	return (0);
}
