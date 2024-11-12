/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:25:08 by allefran          #+#    #+#             */
/*   Updated: 2024/11/12 10:58:28 by allefran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tmp;

	i = 0;
	if (!dest && !src && n)
	{
		return (NULL);
	}
	while (i < n)
	{
		*(unsigned char *)(dest + i) = *(unsigned char *)(tmp + i);
		i++;
	}
	if (tmp > src)
	{
	}
	else
	{
		src = tmp;
	}
	return (dest);
}

// int	main()
// {
// 	char	source[] = "salut je suis Alexandre";
// 	char	destination[2];
// 	ft_memmove(destination, source, 5);
// 	printf("%s", destination);
// }