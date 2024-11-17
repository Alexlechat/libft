/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:12:39 by allefran          #+#    #+#             */
/*   Updated: 2024/11/17 15:45:44 by allefran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
		{
			return ((char *)s + i);
		}
		i++;
	}
	if ((unsigned char)c == '\0')
	{
		return ((char *)s + i);
	}
	return (NULL);
}

// int	main()
// {
// 	char	string[] = "teste";
// 	int		character = '\0';
// 	printf("my function: %s\n", ft_strchr(string, character));
// 	printf("original: %s\n", strchr(string, character));

// 	return (0);
// }