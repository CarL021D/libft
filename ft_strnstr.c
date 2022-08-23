/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caboudar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 14:59:53 by caboudar          #+#    #+#             */
/*   Updated: 2022/06/01 18:13:34 by caboudar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*str;
	char	*to_find;
	size_t	i;
	size_t	j;

	str = (char *)s1;
	to_find = (char *)s2;
	if (!*to_find)
		return (str);
	i = 0;
	while (str[i] && i < n)
	{
		j = 0;
		while (str[i + j] == to_find[j] && (i + j < n))
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <bsd/string.h>
#include <string.h>
int main (int ac, char **av)
{
    if (ac == 4)
    {
       printf("%s\n", ft_strnstr(av[1], av[2], atoi(av[3])));
    //    printf("%s\n", strnstr(av[1], av[2], atoi(av[3])));
    }
}
*/
