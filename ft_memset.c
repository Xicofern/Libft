/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpimenta <jpimenta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 11:15:10 by jpimenta          #+#    #+#             */
/*   Updated: 2026/11/14 09:25:19 by jpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*a;
	int		i;
	int		b;

	a = (char *)s;
	i = 0;
	b = n;
	while (i < b)
	{
		a[i] = c;
		i++;
	}
	return (s);
}

/*
#include <stdio.h>

int main()
{
    char a[20] = "isto ser uma merda";

    ft_memset(a + 13, '*', 5);
    printf("%s\n", a);
}
*/