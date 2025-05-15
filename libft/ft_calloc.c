/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-faya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 05:03:58 by ral-faya          #+#    #+#             */
/*   Updated: 2024/06/14 16:43:29 by ral-faya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t n, size_t size)
{
	void	*p;

	if (n != 0 && size != 0 && n > SIZE_MAX / size)
		return (NULL);
	if ((int)n < 0 && (int)size < 0)
		return (NULL);
	p = malloc(n * size);
	if (!p)
		return (NULL);
	ft_bzero(p, n * size);
	return (p);
}
/*
int main() {
    size_t n = 5; // Number of elements
    size_t size = sizeof(int); // Size of each element (assuming int)
    
    // Call ft_calloc to allocate memory for an array of integers
    int *arr = (int *)ft_calloc(n, size);

    if (arr != NULL) {
        printf("Memory allocation successful\n");

        // Print the contents of the allocated array before initialization
        printf("Allocated array before initialization:\n");
        for (size_t i = 0; i < n; ++i) {
            printf("%d ", arr[i]);
        }
        printf("\n");

        // Initialize the allocated array with some values
        for (size_t i = 0; i < n; ++i) {
            arr[i] = i + 1;
        }

        // Print the contents of the allocated array after initialization
        printf("Allocated array after initialization:\n");
        for (size_t i = 0; i < n; ++i) {
            printf("%d ", arr[i]);
        }
        printf("\n");

        // Don't forget to free the memory allocated by ft_calloc
        free(arr);
    } else {
        printf("Memory allocation failed\n");
    }

    return 0;
}
*/
