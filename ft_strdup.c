/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:35:07 by allefran          #+#    #+#             */
/*   Updated: 2024/11/18 14:19:48 by allefran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup_s;
	int		i;

	dup_s = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (dup_s == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		dup_s[i] = s[i];
		i++;
	}
	dup_s[i] = '\0';
	return (dup_s);
}
// int	main(void)
// {
// 	char	string[] = "";

// 	printf("My function: %p\n",ft_strdup(string));
// 	printf("Originale: %p\n",strdup(string));
// 	return (0);
// }