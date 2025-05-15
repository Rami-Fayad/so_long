/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-faya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:37:30 by ral-faya          #+#    #+#             */
/*   Updated: 2024/06/10 17:41:26 by ral-faya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}
/*
int main() {
    char test_char = '7'; // Change the character to test different cases

    if (ft_isdigit(test_char)) {
        printf("%c is a digit.\n", test_char);
    } else {
        printf("%c is not a digit.\n", test_char);
    }

    return 0;
}
*/
