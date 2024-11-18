/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:47:43 by allefran          #+#    #+#             */
/*   Updated: 2024/11/18 13:34:04 by allefran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_dest;
	size_t	len_src;

	i = 0;
	len_dest = 0;
	while (dst[len_dest] && len_dest < size)
		len_dest++;
	len_src = 0;
	while (src[len_src])
		len_src++;
	while (src[i] && len_dest + i + 1 < size)
	{
		dst[len_dest + i] = src[i];
		i++;
	}
	if (len_dest + i < size)
		dst[len_dest + i] = '\0';
	return (len_dest + len_src);
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