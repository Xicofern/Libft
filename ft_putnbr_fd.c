/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpimenta <jpimenta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 15:39:19 by jpimenta          #+#    #+#             */
/*   Updated: 2026/11/15 15:45:29 by jpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		c;
	int		i;
	long	j;

	j = n;
	i = 1;
	if (j == 0)
		write(fd, "0", 1);
	if (j < 0)
	{
		j = j * -1;
		write(fd, "-", 1);
	}
	if (j > 0)
	{
		while (j / i > 9)
			i = i * 10;
		while (i > 0)
		{
			c = (j / i) + '0';
			write(fd, &c, 1);
			j = j % i;
			i = i / 10;
		}
	}
}
