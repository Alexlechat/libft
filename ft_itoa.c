/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:08:17 by allefran          #+#    #+#             */
/*   Updated: 2024/11/21 14:34:24 by allefran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_size(long n)
{
	size_t	size;

	size = 0;
	if (n < 0)
	{
		n = -n;
		size++;
	}
	if (n == 0)
		size = 1;
	else
	{
		while (n > 0)
		{
			n = n / 10;
			size++;
		}
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*array;
	int		size;
	long	nb;
	int		is_neg;

	nb = (long) n;
	size = ft_size(nb);
	array = malloc(sizeof(char) * (size + 1));
	if (!array)
		return (NULL);
	is_neg = (nb < 0);
	if (is_neg)
		nb = -nb;
	array[size] = '\0';
	while (size--)
	{
		array[size] = (nb % 10) + '0';
		nb = nb / 10;
	}
	if (is_neg)
		array[0] = '-';
	return (array);
}

// int	main(void)
// {
// 	int	number;

// 	number = -2147483648;
// 	printf("my function: %s", ft_itoa(number));
// 	printf("original: %s", ft_itoa(number));
// 	return (0);
// }
