/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimesan <jaimesan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:55:01 by jaimesan          #+#    #+#             */
/*   Updated: 2024/09/17 15:05:06 by jaimesan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*dest;

	dest = (char *)str;
	i = ft_strlen(str);
	if (c > 255)
		c %= 256;
	while (i >= 0)
	{
		if (dest[i] == c)
			return (&dest[i]);
		i--;
	}
	return (NULL);
}
