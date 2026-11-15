/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpimenta <jpimenta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 11:13:51 by jpimenta          #+#    #+#             */
/*   Updated: 2026/11/14 09:33:43 by jpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest_str, const void *src_str, size_t n)
{
	unsigned char	*s;
	unsigned char	*t;
	size_t			i;

	if (dest_str == NULL && src_str == NULL)
		return (NULL);
	s = (unsigned char *) dest_str;
	t = (unsigned char *) src_str;
	i = 0;
	while (i < n)
	{
		s[i] = t[i];
		i++;
	}
	return (dest_str);
}

/*
#include <stdio.h>

int main()
{
    unsigned char a[20] = "old phrase";
    unsigned char b[20] = "new1234 phrase"; 
    
    ft_memcpy(a, b, 3);
    printf("%s\n", a);
}
*/