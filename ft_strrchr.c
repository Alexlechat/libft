/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:18:22 by allefran          #+#    #+#             */
/*   Updated: 2024/11/13 15:34:53 by allefran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s) - 1;
	if (i == 0)
	{
		return (NULL);
	}
	while (i > 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *)(s + i));
		}
		i--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	string[] = "je recherche la derniere occurence";
// 	char	character = 'c';

// 	printf("original: %p\n", strrchr(string, character));
// 	printf("my function: %p\n", ft_strrchr(string, character));
// 	return (0);
// }