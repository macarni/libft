/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 09:34:39 by adrperez          #+#    #+#             */
/*   Updated: 2022/10/18 09:36:25 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Ft_lstlast returns the last element of a linked list.
 * 
 * @param lst A pointer to the first element of a linked list.
 * 
 * @return The last element of the list.
 */
t_list	*ft_lstlast(t_list *lst)
{
	if (lst == 0)
		return (0);
	while (lst->next != 0)
	{
		lst = lst->next;
	}
	return (lst);
}