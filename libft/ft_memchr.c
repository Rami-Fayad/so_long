/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-faya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 02:01:48 by ral-faya          #+#    #+#             */
/*   Updated: 2024/06/20 11:24:23 by ral-faya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t					i;
	char					ch;
	const unsigned char		*str;

	ch = c;
	str = s;
	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)(str + i)) == (unsigned char)ch)
			return ((unsigned char *)str + i);
		i++;
	}
	return (NULL);
}
