/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caboudar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 21:21:30 by caboudar          #+#    #+#             */
/*   Updated: 2022/06/01 19:04:10 by caboudar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while ((char)s[i])
		i++;
	return (i);
}

size_t	remove_beginning(char *str, char *set)
{
	size_t	count;
	int		i;
	int		j;

	count = 0;
	i = 0;
	j = 0;
	while (str[j])
	{
		if (str[j] == set[i])
		{
			i = 0;
			count++;
			j++;
		}
		else
			if (!set[i++])
				break ;
	}
	return (count);
}

size_t	remove_ending(char *str, char *set)
{
	size_t	count;
	int		i;
	int		j;

	count = 0;
	i = 0;
	j = ft_strlen(str);
	j--;
	while (str[j])
	{
		if (str[j] == set[i])
		{
			i = 0;
			count++;
			j--;
		}
		else
		{
			if (!set[i])
				break ;
			i++;
		}
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		rem_first;
	int		rem_last;
	int		len;
	int		i;

	if (!s1 || !set)
		return (NULL);
	rem_first = remove_beginning((char *)s1, (char *)set);
	rem_last = remove_ending((char *)s1, (char *)set);
	len = ft_strlen((char *)s1) - rem_first - rem_last;
	if (len < 0)
		len = 0;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = -1;
	while (++i < len)
		str[i] = (char)s1[rem_first + i];
	str[i] = '\0';
	return (str);
}

/*
 #include <stdio.h>
 int main()
 {
         printf ("%s\n", ft_strtrim("   xxx ooooYYY  xxx", " x"));
         return 0;
 }
*/
