/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:32:51 by allefran          #+#    #+#             */
/*   Updated: 2024/11/20 14:05:02 by allefran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_count_words(const char *s, char c)
{
    size_t nb_words;
    size_t i;

	nb_words = 0;
	i = 0;
    if (s != NULL) 
	{
        while (s[i]) 
		{    
            if (s[i] != c && (i == 0 || s[i - 1] == c)) 
			{
                nb_words++;
            }
            i++;
        }
    }
    return (nb_words);
}

int ft_length_words(const char *s, char c, size_t index_s)
{
    size_t temp_index;

	temp_index = index_s;
    while (s[index_s] != c && s[index_s] != '\0') 
	{
        index_s++;
    }
    return (index_s - temp_index);
}

char **ft_split_fill(char **new_array, const char *s, char c, size_t nb_words, size_t len_word)
{
    size_t index_s;
    size_t i;
    size_t j;

	index_s = 0;
	i = 0;
    while (i < nb_words) 
	{
        j = 0;
        while (j < len_word) 
		{
            new_array[i][j] = s[index_s];
            j++;
            index_s++;
        }
        new_array[i][j] = '\0';  
        i++;  
    }
    new_array[i] = NULL;
    return (new_array);
}

char **ft_split(const char *s, char c)
{
    char	**new_array;
    size_t	nb_words;
	size_t	len_word;
	size_t	index
	size_t	i;
	size_t	k;

    if (s == NULL)
        return NULL;

    nb_words = ft_count_words(s, c);
    new_array = (char **)malloc(sizeof(char *) * (nb_words + 1));
    if (new_array == NULL)
        return NULL;

	i = 0;
	while (new_array[i])
	{
        len_word = ft_length_words(s, c, index_s);
        new_array[i] = (char *)malloc(sizeof(char) * (len_word + 1));
        if (new_array[i] == NULL) 
		{
            k = 0;
            while (k < i) 
			{
                free(new_array[k]);
                k++;
            }
            free(new_array);
            return (NULL);
        }
		i++;
	}
		
	new_array = ft_split_fill(new_array, s, c, nb_words);
    return (new_array);
}

int main(void)
{
    char *string = "salut je suis alex";
    char sep = ' ';
    char **split = ft_split(string, sep);

    
    size_t i = 0;
    while (split[i] != NULL) 
	{
        printf("%s\n", split[i]);
        free(split[i]); 
        i++;
    }
    free(split); 

    return 0;
}