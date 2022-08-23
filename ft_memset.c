/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caboudar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 10:03:39 by caboudar          #+#    #+#             */
/*   Updated: 2022/06/01 18:30:14 by caboudar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n--)
		*ptr++ = c;
	return (s);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	int arr1[] = {1, 2};
	int arr2[] = {1, 2};

	memset(arr1, 2, 2 * sizeof(arr1));
	ft_memset(arr2, 2, 2 * sizeof(arr2));
	printf("%d %d\n", arr1[0], arr1[1]);
	printf("%d %d\n", arr2[0], arr2[1]);
	printf("%ld\n", sizeof(int));
}
*/
