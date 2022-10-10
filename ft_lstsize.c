/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:50:17 by adrperez          #+#    #+#             */
/*   Updated: 2022/10/07 09:35:20 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * It counts the number of elements in a linked list.
 * 
 * @param lst A pointer to the first element of a linked list.
 * 
 * @return The size of the list.
 */
int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 1;
	if (lst)
	{
		while (lst->next != 0)
		{
			size++;
			lst = lst->next;
		}
		return (size);
	}
	return (0);
}