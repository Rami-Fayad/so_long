/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-faya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 01:18:25 by ral-faya          #+#    #+#             */
/*   Updated: 2024/06/14 01:41:44 by ral-faya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (*p1 && *p1 == *p2 && n)
	{
		p1++;
		p2++;
		n--;
	}
	if (n > 0)
		return (*p1 - *p2);
	else
		return (0);
}
/*
#include <stdio.h>
#include <string.h> // Include the standard C library for strncmp
#include "libft.h" // Include your custom library for ft_strncmp

int main() {
    const char *s1 = "Hello";
    const char *s2 = "Hell";
    size_t n = 4; // Maximum number of characters to compare

    // Using ft_strncmp
    int result_ft_strncmp = ft_strncmp(s1, s2, n);
    printf("Result of ft_strncmp: %d\n", result_ft_strncmp);

    // Using strncmp from the standard C library
    int result_strncmp = strncmp(s1, s2, n);
    printf("Result of strncmp: %d\n", result_strncmp);

    return 0;
}
*/
