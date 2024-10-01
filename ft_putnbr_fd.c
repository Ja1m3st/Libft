/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimesan <jaimesan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 09:50:31 by jaimesan          #+#    #+#             */
/*   Updated: 2024/09/24 09:55:35 by jaimesan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	buffer[11];

	i = 0;
	if (n > -2147483648)
	{
		if (n == 0)
			write(fd, "0", 1);
		if (n < 0)
		{
			n *= -1;
			write(fd, "-", 1);
		}
		while (n != 0)
		{
			buffer[i++] = n % 10 + 48;
			n /= 10;
		}
		while (i > 0)
		{
			write(fd, &buffer[--i], 1);
		}
	}
	else
		write(fd, "-2147483648", 11);
}
