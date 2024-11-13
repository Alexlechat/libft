/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 08:57:05 by allefran          #+#    #+#             */
/*   Updated: 2024/11/13 10:32:48 by allefran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((*(unsigned char *)(s + i)) == (unsigned char)(c))
		{
			return ((void *)(s + i));
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*string = "salut je suis alexandre";
// 	char	character = 'z';

// 	printf("original function: %p\n", memchr(string, character, 23));
// 	printf("my function: %p\n", ft_memchr(string, character, 23));

// 	return (0);
// }