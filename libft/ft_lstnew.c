/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-faya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 12:56:46 by ral-faya          #+#    #+#             */
/*   Updated: 2024/06/18 13:21:22 by ral-faya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*add;

	add = malloc(sizeof(t_list));
	if (add == NULL)
	{
		return (0);
	}
	add -> content = content;
	add -> next = NULL;
	return (add);
}
