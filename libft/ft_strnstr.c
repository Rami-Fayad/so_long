/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-faya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 03:45:54 by ral-faya          #+#    #+#             */
/*   Updated: 2024/06/20 12:31:01 by ral-faya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (!big && !len)
		return (NULL);
	if (!*little)
		return ((char *)big);
	while (*big && len--)
	{
		i = 0;
		while (*(big + i) == *(little + i) && *(little + i) && i <= len)
		{
			if (!*(little + i + 1))
				return ((char *)big);
			i++;
		}
		big++;
	}
	return (NULL);
}
/*
int main() {
    const char *big = "Hello, world!";
    const char *little = "world";
    size_t len = strlen(big); 
    // Using ft_strnstr
    char *result_ft_strnstr = ft_strnstr(big, little, len);
    if (result_ft_strnstr != NULL) {
        printf("'%s' found at position: %ld\n", little, result_ft_strnstr - big);
    } else {
        printf("'%s' not found\n", little);
    }
    return 0;
}
*/
