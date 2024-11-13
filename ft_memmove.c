/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:25:08 by allefran          #+#    #+#             */
/*   Updated: 2024/11/13 10:02:52 by allefran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;

	if (src < dest)
	{
		i = 0;
		while (i < n)
		{
			((char *) dest)[n - i - 1] = ((char *) src)[n - i - 1];
			i++;
		}
		return (dest);
	}
	if (src == dest)
		return (dest);
	else
	{
		i = 0;
		while (i < n)
		{
			*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
			i++;
		}
	}
	return (dest);
}

// int	main()
// {
// 	char	*source = "salut je suis Alexandre";
// 	char 	*destination;

// 	printf("original function: %s\n", (char*)memmove(source + 2, source, 5));
// 	printf("my function: %s", (char *)ft_memmove(source + 2, source, 5));
// }