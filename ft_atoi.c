/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:52:33 by allefran          #+#    #+#             */
/*   Updated: 2024/11/18 08:55:15 by allefran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while ((nptr[i] >= '\t' && nptr[i] <= '\r') || nptr[i] == ' ')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while ((nptr[i] >= '0' && nptr[i] <= '9'))
	{
		if (nptr[i] >= '0' && nptr[i] <= '9')
		{
			result = result * 10;
			result = result + (nptr[i] - 48);
			i++;
		}
	}
	return (result * sign);
}

// int	main(void)
// {
// 	const char	n[] = "\t\n\r\v\f460\n";

// 	printf("original function: %d\n", atoi(n));
// 	printf("my function: %d\n", ft_atoi(n));

// 	return (0);
// }