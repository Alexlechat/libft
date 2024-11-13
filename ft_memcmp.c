/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:34:56 by allefran          #+#    #+#             */
/*   Updated: 2024/11/13 11:06:49 by allefran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	c1;
	unsigned char	c2;

	i = 0;
	while (i < n)
	{
		c1 = *(unsigned char *)(s1 + i);
		c2 = *(unsigned char *)(s2 + i);
		if (c1 != c2)
		{
			return (c1 - c2);
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	*string1 = "salut je suis alex";
// 	char	*string2 = "salut je suis bob";
// 	int	n = 17;

// 	printf("original function: %d\n", memcmp(string1, string2, n));
// 	printf("my function: %d\n", ft_memcmp(string1, string2, n));
// 	return (0);
// }