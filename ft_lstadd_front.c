/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:36:59 by adrperez          #+#    #+#             */
/*   Updated: 2022/10/18 14:59:21 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Adds a new element to the beginning of a list.
 * 
 * @param lst A pointer to a pointer to a linked list.
 * @param new the new element to add to the list
 * Primero hacemos que el next apunte a la lista y luego, cuando ya lo hace, hacemos que el nodo esté DENTRO de la lista 
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	*lst = new;
}










// new->next = *lst;
// 	*lst = new;