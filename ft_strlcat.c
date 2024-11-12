/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:47:43 by allefran          #+#    #+#             */
/*   Updated: 2024/11/12 10:54:13 by allefran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	int		i;

	i = 0;
	while (dst[i] != '\0')
	{
		i++;
	}
	len = i;
	i = 0;
	while (src[i] != '\0')
	{
		*(char *)(dst + len) = *(src + i);
		len++;
		i++;
	}
	return (len);
}

// int	main(void)
// {
// 	char	dest[25] = "salut je suis";
// 	char	src[25] = "Alex";
// 	ft_strlcat(dest, src, 5);
// 	printf("%s\n", dest);
// 	printf("%zu\n", ft_strlcat(dest, src, 5));
// 	return (0);
// }