/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caboudar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 19:56:43 by caboudar          #+#    #+#             */
/*   Updated: 2022/06/01 18:08:13 by caboudar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_create_len(char *str, unsigned int start, size_t len)
{
	size_t	count;

	if (start >= ft_strlen(str))
		return (0);
	count = 0;
	while (str[start] && count < len)
	{
		count++;
		start++;
	}
	return (count);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	l;

	if (!s)
		return (NULL);
	l = ft_create_len((char *)s, start, len);
	str = malloc(sizeof(char) * (l + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (l--)
		str[i++] = (char)s[start++];
	str[i] = '\0';
	return (str);
}
