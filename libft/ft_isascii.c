/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-faya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:45:12 by ral-faya          #+#    #+#             */
/*   Updated: 2024/06/11 10:57:59 by ral-faya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
int main()
{
    char test_char = 'A';
    if (ft_isascii(test_char))
        printf("%c is an ASCII character.\n", test_char);
    else
        printf("%c is not an ASCII character.\n", test_char);

    return 0;
}
*/
