/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:13:51 by allefran          #+#    #+#             */
/*   Updated: 2024/11/13 13:10:16 by allefran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len;

	if (!dest || !src || size == 0)
	{
		return (0);
	}
	len = 0;
	while (len < size - 1 && src[len] != '\0')
	{
		dest[len] = src[len];
		len++;
	}
	if (size > 0)
	{
		dest[len] = '\0';
	}
	while (src[len] != '\0')
	{
		len++;
	}
	return (len);
}

//compile: cc -lbsd ft_strlcpy.c
// int	main(void)
// {
// 	char	source[] = "aaa";
// 	char	destination[100];
// 	int	n = 5;

// 	strlcpy(destination, source, n);
// 	printf("original function: %zu\n", strlcpy(destination, source, n));
// 	printf("original destination: %s\n", destination);

// 	ft_strlcpy(destination, source, n);
// 	printf("my function: %zu\n", ft_strlcpy(destination, source, n));
// 	printf("my destination: %s\n", destination);

// 	return (0);
// }