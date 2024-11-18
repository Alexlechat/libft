/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:15:46 by allefran          #+#    #+#             */
/*   Updated: 2024/11/18 13:26:06 by allefran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
	{
		return ((char *)big);
	}
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] != '\0' && (i + j) < len && big[i + j] == little[j])
		{
			j++;
			if (little[j] == '\0')
			{
				return ((char *)(big + i));
			}
		}
		i++;
	}
	i++;
	return (NULL);
}

// int	main(void)
// {
// 	char	*largerstring = "aaabcabcd";
// 	char	*smallstring = "aabc";
// 	size_t	n = 5;

// 	//printf("original function: %p\n", strnstr(largerstring, smallstring, n));
// 	printf("my fuction: %p\n", ft_strnstr(largerstring, smallstring, n));

// 	return (0);
// }