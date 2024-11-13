/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:52:33 by allefran          #+#    #+#             */
/*   Updated: 2024/11/13 16:06:35 by allefran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{

	
}

int	main(void)
{
	const char	n[] = "1425";
	
	printf("original function: %d", atoi(n));
	printf("my function: %d", ft_atoi(n));
	
	return (0);
}