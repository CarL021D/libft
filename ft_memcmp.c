/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caboudar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 12:12:43 by caboudar          #+#    #+#             */
/*   Updated: 2022/06/01 17:18:37 by caboudar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (n--)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		else
		{
			str1++;
			str2++;
		}
	}
	return (0);
}

// #include <stdio.h>
// int main()
// {
//     char *s1 = "d";
//     char *s2 = "abcd";
//     printf("%d\n", ft_memcmp(s1, s2, 6 * sizeof(char *)));
//     printf("%d\n", memcmp(s1, s2, 6 * sizeof(char *)));
// }
