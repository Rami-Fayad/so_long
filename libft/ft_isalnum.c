/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-faya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:28:17 by ral-faya          #+#    #+#             */
/*   Updated: 2024/06/11 12:29:06 by ral-faya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/*
int main()
{
    char test_char = '0';
    if (ft_isalpha(test_char))
        printf("%c is an alphabet character.\n", test_char);
    else
        printf("%c is not an alphabet character.\n", test_char);

    return 0;
}
*/
