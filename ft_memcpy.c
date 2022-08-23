/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caboudar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:49:25 by caboudar          #+#    #+#             */
/*   Updated: 2022/06/01 17:10:24 by caboudar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n--)
		*d++ = *s++;
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
	char *s1 = "abcd";
	char s2[4];
    char *s3 = "abcd";
	char s4[4];

	char *mem = (char *)memcpy(s2, s1, 4 * sizeof(char));
	char *ft_mem = (char *)ft_memcpy(s4, s3, 4 * sizeof(char));
	printf("%s\n", mem);
	printf("%s\n", ft_mem);
}
*/
