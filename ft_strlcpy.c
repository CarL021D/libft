/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caboudar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 15:52:30 by caboudar          #+#    #+#             */
/*   Updated: 2022/05/12 02:21:58 by caboudar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, const char *src, size_t size)
{
	char			*s;
	unsigned int	i;
	unsigned int	l;

	s = (char *)src;
	i = 0;
	while (s[i] && size != 0 && i < size - 1)
	{
		dest[i] = s[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	l = 0;
	while (s[l])
		l++;
	return (l);
}

/*
#include <stdio.h>
int main()
{
	const char	*c = "abc";
	char		*s = "mno";
	printf("%d\n", ft_strlcpy(s, c, 10));
}
*/