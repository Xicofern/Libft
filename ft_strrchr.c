/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpimenta <jpimenta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 11:12:40 by jpimenta          #+#    #+#             */
/*   Updated: 2026/11/14 09:46:01 by jpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == (unsigned char)c)
			return ((char *)&str[i]);
		i--;
	}
	if (c == '\0')
		return ((char *)&str[i]);
	return (NULL);
}

/*
#include <stdio.h>

int main()
{
    const char *s = "bdaesacad";
    int c = 'a';

    printf("%s\n", ft_strrchr(s, c));
}
*/