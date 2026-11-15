/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpimenta <jpimenta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 12:15:57 by jpimenta          #+#    #+#             */
/*   Updated: 2026/11/15 11:21:24 by jpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_word_cont(char const *str, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i])
		{
			j++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (j);
}

static void	ft_free(char **str, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		free(str[i]);
		i++;
	}
	free(str);
}

static char	*ft_word(char const *s, size_t start, size_t len)
{
	char	*word;

	word = malloc(len + 1);
	if (!word)
		return (NULL);
	ft_memmove(word, &s[start], len);
	word[len] = '\0';
	return (word);
}

static size_t	ft_len(char const *s, size_t k, char c)
{
	size_t	i;

	i = 0;
	while (s[k + i] && s[k + i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	j;
	size_t	k;

	if (!s)
		return (NULL);
	k = 0;
	j = 0;
	str = malloc((ft_word_cont(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	while (s[k])
	{
		while (s[k] && s[k] == c)
			k++;
		if (!s[k])
			break ;
		str[j] = ft_word(s, k, ft_len(s, k, c));
		if (!str[j])
			return (ft_free(str, j), NULL);
		k += ft_strlen(str[j++]);
	}
	str[j] = NULL;
	return (str);
}
/*

#include <stdio.h>
int main()
{
	char    *s1 = "12345f12345";
    char    **result;
    int     i;

    result = ft_split(s1, 'f');
	i = 0;
    while (result[i])	
    {
        printf("%s", result[i]);
        i++;
    }
    ft_free(result, i);
}
*/