/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpimenta <jpimenta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 12:15:02 by jpimenta          #+#    #+#             */
/*   Updated: 2026/11/15 14:04:48 by jpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	long	ft_size(long i)
{
	long	len;

	len = 0;
	if (i <= 0)
	{
		i *= -1;
		len += 1;
	}
	while (i > 0)
	{
		i = i / 10;
		len++;
	}
	return (len);
}

static	long	ft_pow(long base, long exp)
{
	long	result;
	long	i;

	i = 0;
	result = 1;
	while (i < exp)
	{
		result *= base;
		i++;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	i;
	long	j;
	long	k;

	i = n;
	j = 0;
	str = malloc((ft_size(i) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (i < 0)
	{
		i *= -1;
		str[j] = '-';
		j++;
	}
	k = ft_pow(10, (ft_size(i)) - 1);
	while (j < ft_size(n))
	{
		str[j++] = (i / k) + '0';
		i = i % k;
		k = k / 10;
	}
	str[j] = '\0';
	return (str);
}
/*

#include <stdio.h>
int main()
{
	printf("%s\n", ft_itoa(-1234088));
}*/