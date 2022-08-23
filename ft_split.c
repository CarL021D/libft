/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caboudar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:58:59 by caboudar          #+#    #+#             */
/*   Updated: 2022/05/14 21:20:37 by caboudar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_char_is_sep(char c, char charset)
{
	return (c == charset);
}

int	ft_word_len(char *str, char charset)
{
	int		i;

	i = 0;
	while (str[i] && !ft_char_is_sep(str[i], charset))
		i++;
	return (i);
}

int	ft_word_count(char *str, char charset)
{
	int		count;
	int		word_len;

	count = 0;
	while (*str)
	{
		if (*str && ft_char_is_sep(*str, charset))
			str++;
		else
		{
			count++;
			word_len = ft_word_len(str, charset);
			str += word_len;
		}
	}
	return (count);
}

char	*ft_malloc_word(char *str, int u)
{
	char	*word;

	word = malloc(sizeof(char) * (u + 1));
	if (!word)
		return (NULL);
	word[u] = '\0';
	while (--u >= 0)
		word[u] = str[u];
	return (word);
}

char	**ft_split(const char *s, char c)
{
	char	*str;
	char	**arr;
	int		word_count;
	int		word_len;
	int		i;

	str = (char *)s;
	word_count = ft_word_count(str, c);
	arr = malloc(sizeof(char *) * (word_count + 1));
	if (!arr)
		return (NULL);
	i = -1;
	while (++i < word_count)
	{
		while (*str && ft_char_is_sep(*str, c))
			str++;
		word_len = ft_word_len(str, c);
		arr[i] = ft_malloc_word(str, word_len);
		if (!arr[i])
			return (NULL);
		str += word_len;
	}
	arr[i] = NULL;
	return (arr);
}

// #include <stdio.h>
// int main(int ac, char **av)
// {
// 	int i = -1;
// 	char **arr = ft_split(av[1], *av[2]);

// 	if (ac == 3)
// 	{
// 		while (arr[++i])
// 			printf("%s\n", arr[i]);
// 	}
// }
