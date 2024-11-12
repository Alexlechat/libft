/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:35:18 by allefran          #+#    #+#             */
/*   Updated: 2024/11/11 12:45:17 by allefran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *) s = 0;
		s++;
		i++;
	}
}

// int	main()
// {
// 	char string[] = "salut tout le monde";
// 	printf("before: %s\n", string);
// 	ft_bzero(string, 5);
// 	printf("after: %s\n", string);
// }
