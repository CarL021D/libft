/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caboudar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 08:59:23 by caboudar          #+#    #+#             */
/*   Updated: 2022/06/01 17:57:58 by caboudar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_fill_arr(unsigned int value, int i, int neg)
{
	char	*res;

	res = malloc(sizeof(char) * (i + neg + 1));
	if (!res)
		return (NULL);
	res[i + neg] = '\0';
	if (!neg)
		i--;
	while (i >= 0)
	{
		res[i] = (value % 10) + 48;
		i--;
		value /= 10;
	}
	if (neg)
		res[0] = '-';
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;
	int		value;
	int		neg_s;

	i = 1;
	value = n;
	neg_s = 0;
	if (n < 0)
	{
		value = -n;
		neg_s = 1;
	}
	while (n >= 10 || n <= -10)
	{
		i++;
		n /= 10;
	}
	res = ft_fill_arr(value, i, neg_s);
	return (res);
}

// #include <stdio.h>
// int main(int ac, char **av)
// {
// 	if (ac == 2)
// 		printf("%s\n", ft_itoa(atoi(av[1])));
// }
