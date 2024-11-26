/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:13:51 by allefran          #+#    #+#             */
/*   Updated: 2024/11/14 11:40:57 by allefran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	if (size == 0)
	{
		return (ft_strlen(src));
	}
	i = 0;
	while (i < (size - 1) && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

//compile: cc -lbsd ft_strlcpy.c
// int	main(void)
// {
// 	char	source[] = "lorem ipsum dolor sit amet";
// 	char	destination[100];
// 	int	n = 0;

// 	strlcpy(destination, source, n);
// 	printf("original function: %d\n", strlcpy(destination, source, n));
// 	printf("original destination: %s\n", destination);

// 	ft_strlcpy(destination, source, n);
// 	printf("my function: %zu\n", ft_strlcpy(destination, source, n));
// 	printf("my destination: %s\n", destination);

// 	return (0);
// }