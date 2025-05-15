/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-faya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 15:17:44 by ral-faya          #+#    #+#             */
/*   Updated: 2024/06/14 15:48:36 by ral-faya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*dest_ptr;

	dest_ptr = dest;
	if (!dest && !src)
		return (dest);
	if (dest == src)
		return (dest);
	if (dest > src)
	{
		while (n--)
			((char *)dest)[n] = ((char *)src)[n];
	}
	else
	{
		while (n--)
			*(char *)dest++ = *(char *)src++;
	}
	return (dest_ptr);
}
/*
int main() {
    char str1[20] = "Hello, World!";
    char str2[20];

    // Using standard library memmove function
    memmove(str2, str1, strlen(str1) + 1);
    printf("Standard memmove: %s\n", str2);

    // Using custom ft_memmove function
    ft_memmove(str2, str1, strlen(str1) + 1);
    printf("Custom ft_memmove: %s\n", str2);

    return 0;
}
*/
