/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:06:41 by allefran          #+#    #+#             */
/*   Updated: 2024/11/17 16:33:38 by allefran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	i = 0;
	if (n == 0)
	{
		return (0);
	}
	if (s1[i] == '\0' || s2[i] == '\0')
	{
		return ((const unsigned char)s1[i] - (const unsigned char)s2[i]);
	}

	
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
		{
			return ((const unsigned char)s1[i] - (const unsigned char)s2[i]);
		}
		i++;
	}
	return ((const unsigned char)s1[i] - (const unsigned char)s2[i]);
}

// int	main(void)
// {
// 	char	s1[] = "testu\200";
// 	char	s2[] = "test\0";
// 	int	n = 6;

// 	printf("original: %d\n", strncmp(s1, s2, n));
// 	printf("my function: %d\n", ft_strncmp(s1, s2, n));
// 	return (0);
// }