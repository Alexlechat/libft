/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:57:20 by allefran          #+#    #+#             */
/*   Updated: 2024/11/11 15:10:07 by allefran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == NULL && src == NULL && n)
	{
		return (NULL);
	}
	while (i < n)
	{
		*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
		i++;
	}
	return (dest);
}

// int	main()
// {
// 	char	source[] = "salut je suis Alexandre";
// 	char	destination[4];
// 	ft_memcpy(destination, source, 5);
// 	printf("%s", destination);
// 	return (0);
// }