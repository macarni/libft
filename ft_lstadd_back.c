/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 09:39:25 by adrperez          #+#    #+#             */
/*   Updated: 2022/10/14 08:52:13 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * It adds a new element to the end of the list.
 * 
 * @param lst A pointer to a pointer to a linked list.
 * @param new the new element to add to the list
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	while ((*lst)->next != 0)
	{
		*lst = (*lst)->next;
	}
	(*lst)->next = new;
}