/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caboudar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 16:49:09 by caboudar          #+#    #+#             */
/*   Updated: 2022/06/01 18:33:02 by caboudar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	l_s1;
	size_t	l_s2;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	l_s1 = ft_strlen((char *)s1);
	l_s2 = ft_strlen((char *)s2);
	str = malloc(sizeof(char) * (l_s1 + l_s2 + 1));
	if (!str)
		return (NULL);
	i = -1;
	j = -1;
	while (++i < l_s1)
		str[i] = (char)s1[i];
	while (++j < l_s2)
		str[i++] = (char)s2[j];
	str[i] = '\0';
	return (str);
}

// #include <stdio.h>
// int main(int ac, char **av)
// {
//     if (ac == 3)
//         printf("%s\n", ft_strjoin(av[1],av[2]));
// }
