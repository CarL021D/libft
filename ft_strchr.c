/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caboudar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 01:04:20 by caboudar          #+#    #+#             */
/*   Updated: 2022/05/14 13:38:56 by caboudar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s && *s != (unsigned char)c)
		s++;
	if (*s == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}

// #include <stdio.h>
// #ifdef MAIN 
// int main()
// {
// 	char s[] = "tripouille";
// 	printf("%s\n", ft_strchr(s, 0));
// 	// printf("%s\n", strchr(s, 0));
// }
// #endif