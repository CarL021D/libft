/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caboudar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 01:04:20 by caboudar          #+#    #+#             */
/*   Updated: 2022/06/01 18:53:04 by caboudar         ###   ########.fr       */
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

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = (char *)s;
	if (!str)
		return (NULL);
	i = ft_strlen(str);
	while (i > 0 && str[i] != (unsigned char)c)
		i--;
	if (str[i] == (unsigned char)c)
		return (&str[i]);
	return (NULL);
}

/*
// #ifndef MAIN
#include <stdio.h>
#include <string.h>
int main(int ac, char **av)
{
    if (ac == 3)
    {
		//printf("%s\n", strrchr(av[1], *av[2]));
		printf("%s\n", ft_strrchr(av[1], *av[2]));
    }
}
// #endif
*/
