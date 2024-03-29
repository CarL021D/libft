/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caboudar <caboudar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:01:46 by caboudar          #+#    #+#             */
/*   Updated: 2023/04/26 10:02:25 by caboudar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pipex.h"

void    free_arr(char **arr, int i)
{
	if (i)
	{
		while (i > 0)
		{
			free(arr[i - 1]);
			i--;
		}
	}
	free(arr);
}

int	ft_word_len(char *str, char charset)
{
	int		len;

	len = 0;
	while (str[len] && str[len] != charset)
		len++;
	return (len);
}

int	ft_word_count(char *str, char charset)
{
	int		count;
    int		i;

	count = 0;
    i = 0;
	while (str[i])
	{
		if (str[i] && str[i] == charset)
			i++;
		else
		{
			count++;
			while (str[i] && str[i] != charset)
			i++;
		}
	}
	return (count);
}

char	*ft_malloc_word(char *str, char charset)
{
	char	*word;
	int		size;

	size = ft_word_len(str, charset);
	word = malloc(sizeof(char) * (size + 1));
	if (!word)
		return (NULL);
	word[size] = '\0';
	while (--size >= 0)
		word[size] = str[size];
	return (word);
}

char	**ft_split(char *str, char c)
{
	char	**arr;
	int		word_count;
	int		i;
	int		j;

	word_count = ft_word_count(str, c);
	arr = malloc(sizeof(char *) * (word_count + 1));
	if (!arr)
		return (NULL);
	i = -1;
	j = 0;
	while (++i < word_count)
	{
		while (str[j] && str[j] == c)
			j++;
		arr[i] = ft_malloc_word(str + j, c);
		if (!arr[i])
		{
			free_tab(arr, i);
			return (NULL);
		}
		j += ft_word_len(str + j, c);
	}
	arr[i] = NULL;
	return (arr);
}

/*
#include <stdio.h>
int main(int ac, char **av)
{
	int i = -1;
	char **arr = ft_split(av[1], *av[2]);

	if (ac == 3)
	{
		while (arr[++i])
			printf("%s\n", arr[i]);
	}
}
*/
