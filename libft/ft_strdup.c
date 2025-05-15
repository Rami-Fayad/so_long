/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-faya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 04:39:07 by ral-faya          #+#    #+#             */
/*   Updated: 2024/06/14 04:53:24 by ral-faya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	size_t	i;

	i = ft_strlen(s) + 1;
	d = malloc(i);
	if (d == NULL)
		return (NULL);
	ft_memcpy(d, s, i);
	return (d);
}
/*
int main() {
    const char *s = "Hello, world!";
    char *duplicate = ft_strdup(s);
    if (duplicate != NULL) {
        printf("Original string: %s\n", s);
        printf("Duplicate string: %s\n", duplicate);
        free(duplicate);
    } else {
        printf("Memory allocation failed\n");
    }

    return 0;
}*/
