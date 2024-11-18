/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:06:41 by allefran          #+#    #+#             */
/*   Updated: 2024/11/18 11:43:22 by allefran         ###   ########.fr       */
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
	while (s1[i] && s2[i] && i < n - 1)
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
// 	char	s1[] = "1234";
// 	char	s2[] = "1235";
// 	int	n = 3;

// 	printf("original: %d\n", strncmp(s1, s2, n));
// 	printf("my function: %d\n", ft_strncmp(s1, s2, n));
// 	return (0);
// }