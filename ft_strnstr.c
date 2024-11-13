/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:15:46 by allefran          #+#    #+#             */
/*   Updated: 2024/11/13 15:33:32 by allefran         ###   ########.fr       */
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
		while (big[i] != '\0' && i < len && big[i] == little[j])
		{
			i++;
			j++;
			if (little[j] == '\0')
			{
				return ((char *)(big + i - j));
			}
		}
		i++;
	}
	i++;
	return (NULL);
}

// int	main(void)
// {
// 	char	*largerstring = "alex bob cat";
// 	char	*smallstring = "bob";
// 	size_t	n = 50;

// 	printf("original function: %s\n", strnstr(largerstring, smallstring, n));
// 	printf("my fuction: %s\n", ft_strnstr(largerstring, smallstring, n));

// 	return (0);
// }