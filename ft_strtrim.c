/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 09:29:16 by allefran          #+#    #+#             */
/*   Updated: 2024/11/19 13:30:08 by allefran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_find_start(const char *s1, const char *set)
{
	size_t	start;

	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
	{
		start++;
	}
	return (start);
}

size_t	ft_find_end(const char *s1, const char *set, size_t start, size_t end)
{
	while (end > start && ft_strchr(set, s1[end]))
	{
		end--;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_s;
	size_t	start;
	size_t	end;
	size_t	len_set;
	int		i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = ft_find_start(s1, set);
	end = ft_strlen(s1);
	end = ft_find_end(s1, set, start, end);
	len_set = end - start + 1;
	new_s = malloc(len_set + 1);
	if (new_s == NULL)
		return (NULL);
	i = 0;
	while (s1[start] && start <= end)
	{
		new_s[i] = s1[start];
		start++;
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}

// int	main(void)
// {
// 	char	*s1 = "   alexa   xxx";
// 	char	*set = " x";
// 	char	*trimmed_s = ft_strtrim(s1, set);
// 	printf("TRIMMED STRING: %s\n", trimmed_s);
// 	return (0);
// }