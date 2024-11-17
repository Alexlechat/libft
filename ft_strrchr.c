/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:18:22 by allefran          #+#    #+#             */
/*   Updated: 2024/11/17 15:26:21 by allefran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	if (i == 0)
	{
		return (NULL);
	}
	i--;
	if ((char)c == '\0')
	{
		return ((char *)(&s[i + 1]));
	}
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *)(s + i));
		}
		if (i == 0)
			return (NULL);
		i--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	string[] = "";
// 	char	character = '0';

// 	printf("original: %p\n", strrchr(string, character));
// 	printf("my function: %s\n", ft_strrchr(string, character));

// 	printf("adrese: %p", &string[1]);
// 	return (0);
// }