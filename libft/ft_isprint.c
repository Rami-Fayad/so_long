/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-faya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 11:06:40 by ral-faya          #+#    #+#             */
/*   Updated: 2024/06/11 11:10:42 by ral-faya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
int main()
{
    char test_char = 'A';
    if (ft_isprint(test_char))
        printf("%c is a printable character.\n", test_char);
    else
        printf("%c is not a printable character.\n", test_char);

    return 0;
}
*/
