/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpimenta <jpimenta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 09:59:42 by jpimenta          #+#    #+#             */
/*   Updated: 2026/11/14 12:11:27 by jpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	j;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen((char *)s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (j > i && ft_strchr(set, s1[j - 1]))
		j--;
	str = ft_substr(s1, i, j - i);
	return (str);
}

/*
#include <stdio.h>

int main()
{
	char const *s = "abcdHELLOWorldabcd";
	char const *s2 = "abcd";
	printf("%s\n", ft_strtrim(s, s2));
}*/