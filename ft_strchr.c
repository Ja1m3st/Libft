/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimesan <jaimesan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:37:06 by jaimesan          #+#    #+#             */
/*   Updated: 2024/09/23 13:00:46 by jaimesan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*dest;

	dest = (char *)str;
	if (c > 255)
		c %= 256;
	while (*dest != c)
	{
		if (*dest == '\0')
			return (NULL);
		dest++;
	}
	return (dest);
}
