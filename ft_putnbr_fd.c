/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:11:01 by allefran          #+#    #+#             */
/*   Updated: 2024/11/21 14:43:39 by allefran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*array;
	size_t	i;

	array = ft_itoa(n);
	if (!array)
		return ;
	i = 0;
	while (array[i])
	{
		write(fd, &array[i], 1);
		i++;
	}
	free(array);
}

// int	main(void)
// {
// 	int	number;
// 	int fd;

// 	number = 0;
// 	fd = 4;
// 	ft_putnbr_fd(number, fd);
// 	return (0);
// }