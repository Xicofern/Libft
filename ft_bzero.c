/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpimenta <jpimenta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 14:51:50 by jpimenta          #+#    #+#             */
/*   Updated: 2026/11/14 09:33:55 by jpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ns;

	ns = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ns[i] = '\0';
		i++;
	}
}

/*
#include <stdio.h>

int main()
{
	char a[20] = "0123456789abcdefg";
	ft_bzero(a, 1);
	printf("%s\n", a);
}*/