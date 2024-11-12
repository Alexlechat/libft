/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 09:05:58 by allefran          #+#    #+#             */
/*   Updated: 2024/11/11 12:42:56 by allefran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		*(unsigned char *)(s + i) = (unsigned char) c;
		i++;
	}
	return (s);
}

// int	main()
// {
// 	char mem[15] = "Bonjour, monde!";
//     printf("\nBefore memset(): %s\n", mem);

// 	ft_memset(mem[0], 'c', 5);
// 	printf("After memset():  %s\n", mem);
// 	return (0);
// }