/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:12:39 by allefran          #+#    #+#             */
/*   Updated: 2024/11/12 11:28:36 by allefran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s)
	{
		if (s[i] == c)
		{
			return ();
		}
		
	}
}

int	main()
{
	char	string[] = "Salut je suis Alex";
	int		character = 'A';
	
	return (0);
}