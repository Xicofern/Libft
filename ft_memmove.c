/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpimenta <jpimenta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 11:13:41 by jpimenta          #+#    #+#             */
/*   Updated: 2026/11/15 12:08:01 by jpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*t;

	if (!dest && !src)
		return (NULL);
	s = (unsigned char *)dest;
	t = (unsigned char *)src;
	if (s < t)
	{
		while (n--)
		{
			*s = *t;
			s++;
			t++;
		}
	}
	else
	{
		while (n--)
			s[n] = t[n];
	}
	return (dest);
}
