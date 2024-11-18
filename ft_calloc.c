/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:58:58 by allefran          #+#    #+#             */
/*   Updated: 2024/11/18 14:24:39 by allefran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	ft_bzero(array, nmemb * size);
	return (array);
}

// void	ft_print_array(int *ptr, int n)
// {
// 	int	i;

// 	i = 0;
// 	while (i < n)
// 	{
// 		printf("array[%d]= %d\n", i, ptr[i]);
// 		i++;
// 	}
// }

// int main()
// {
//     size_t nmemb1 = 5, size1 = sizeof(int);
//     size_t nmemb2 = 10, size2 = sizeof(char);
//     size_t nmemb3 = 0, size3 = sizeof(0);

//     int *arr1 = (int *)calloc(nmemb1, size1);
//     int *arr2 = (int *)ft_calloc(nmemb1, size1);

//     char *arr3 = (char *)calloc(nmemb2, size2);
//     char *arr4 = (char *)ft_calloc(nmemb2, size2);

//     float *arr5 = (float *)calloc(nmemb3, size3);
//     float *arr6 = (float *)ft_calloc(nmemb3, size3);

//     // if (!arr1 || !arr2 || !arr3 || !arr4 || !arr5 || !arr6)
//     // {
//     //     printf("Memory allocation failed\n");
//     //     return 1;
//     // }

//     if (memcmp(arr1, arr2, nmemb1 * size1) == 0)
//         printf("Test 1: success\n");
//     else
//         printf("Test 1: failed\n");

//     if (memcmp(arr3, arr4, nmemb2 * size2) == 0)
//         printf("Test 2: success\n");
//     else
//         printf("Test 2: failed\n");

//     if (memcmp(arr5, arr6, nmemb3 * size3) == 0)
//         printf("Test 3: success\n");
//     else
//         printf("Test 3: failed\n");

//     free(arr1);
//     free(arr2);
//     free(arr3);
//     free(arr4);
//     free(arr5);
//     free(arr6);

//     return 0;
// }