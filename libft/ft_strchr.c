/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-faya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 23:33:06 by ral-faya          #+#    #+#             */
/*   Updated: 2024/06/20 11:53:17 by ral-faya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	ch;

	ch = (char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ch)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == '\0' && s[i] == ch)
		return ((char *)s + i);
	return (NULL);
}
/*
int main() {
    const char *str = "Hello, world!";
    int character = '4'; // Character to search for

    char *result = ft_strchr(str, character);

    if (result != NULL) {
        printf("Found '%c' at position: %ld\n", character, result - str);
    } else {
        printf("Character '%c' not found\n", character);
    }

    return 0;
}
*/
