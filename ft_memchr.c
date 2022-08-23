/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caboudar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 10:42:17 by caboudar          #+#    #+#             */
/*   Updated: 2022/06/01 18:34:21 by caboudar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_cpy;

	s_cpy = (unsigned char *)s;
	while (n--)
	{
		if (*s_cpy == (unsigned char)c)
			return (s_cpy);
		s_cpy++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
    int arr1[] = {1, 2};
    int arr2[] = {1, 2};

    if (ft_memchr(arr1, INT_MAX, 2 * sizeof(int)))
        printf("Found\n");
    else
        printf("Not found\n");

    if (memchr(arr2, INT_MAX, 2 * sizeof(int)))
        printf("Found\n");
    else
        printf("Not found\n");

//    printf("%p\n", (void *)arr1[0]);
//    printf("%p\n", (void *)arr1[1]);
//    printf("%p\n", (void *)arr2[0]);
//    printf("%p\n", (void *)arr2[1]);
}
*/
