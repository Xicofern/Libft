/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpimenta <jpimenta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 08:40:45 by jpimenta          #+#    #+#             */
/*   Updated: 2026/11/15 12:17:30 by jpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	j;
	int	k;

	k = 1;
	j = 0;
	while (*str && (*str == ' ' || (*str >= 9 && *str <= 13)))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			k = -1;
		str++;
	}
	while (*str && (*str >= '0' && *str <= '9'))
	{
		j = (j * 10) + (*str - '0');
		str++;
	}
	return (j * k);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d", ft_atoi("  \t\r   +--++-----12314vjfoa123"));
// 	return (0);
// }
