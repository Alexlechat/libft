/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:13:51 by allefran          #+#    #+#             */
/*   Updated: 2024/11/12 10:11:14 by allefran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len;

	len = 0;
	if (!dest && !src && size)
	{
		return (0);
	}
	while (len < size)
	{
		*(dest + len) = *(char *)(src + len);
		len++;
	}
	*(dest + len) = '\0';
	return (len);
}

// int	main(void)
// {
// 	char	source[] = "salut je suis Alex";
// 	char	destination[10];

// 	ft_strlcpy(destination, source, 12);
// 	printf("%s\n", destination);
// 	printf("%zu\n", ft_strlcpy(destination, source, 7));
// 	return (0);
// }