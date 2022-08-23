/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caboudar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:50:40 by caboudar          #+#    #+#             */
/*   Updated: 2022/06/01 14:53:22 by caboudar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;

	i = 0;
	while (i < size && dst[i])
		i++;
	if (i == size)
		return (i + ft_strlen(src));
	j = -1;
	dst_len = ft_strlen(dst);
	while (src[++j])
	{
		if (j < size - dst_len - 1)
		{
			dst[i] = src[j];
			i++;
		}
	}
	dst[i] = '\0';
	return (dst_len + j);
}
