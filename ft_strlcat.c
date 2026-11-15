/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpimenta <jpimenta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 11:13:02 by jpimenta          #+#    #+#             */
/*   Updated: 2026/11/14 09:48:20 by jpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	n;
	size_t	t;

	t = 0;
	i = 0;
	n = 0;
	while (src[t])
		t++;
	if (size > 0)
	{
		while (i < size && dst[i])
			i++;
		if (i == size)
			return (t + size);
		while (src[n] && i + n < size - 1)
		{
			dst[i + n] = src[n];
			n++;
		}
		dst[i + n] = '\0';
	}
	return (i + t);
}

/*
#include <stdio.h>

int main()
{
    char    dst[5] = "abc";
    char    *src = "12345";

    ft_strlcat(dst, src, 2);
    printf("%lx\n", ft_strlcat(dst, src, 5));
}
*/