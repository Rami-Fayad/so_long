/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-faya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 11:41:36 by ral-faya          #+#    #+#             */
/*   Updated: 2024/06/11 12:51:54 by ral-faya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}
/*
int main() {
    char buffer[10]; // Create a buffer to hold characters

    // Use ft_memset to fill the buffer with 'A' (ASCII value 65)
    ft_memset(buffer, 'A', 10);

    // Print the content of the buffer
    printf("Buffer after memset: %s\n", buffer);

    return 0;
}
*/
