/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpimenta <jpimenta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 14:06:28 by jpimenta          #+#    #+#             */
/*   Updated: 2026/11/15 14:35:15 by jpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	char	*dest;
	int		i;

	i = 0;
	str = (char *)s;
	if (!s || !f)
		return (NULL);
	dest = malloc(ft_strlen(str) + 1);
	if (!dest)
		return (NULL);
	while (i < ft_strlen(str))
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
