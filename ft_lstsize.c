/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:50:17 by adrperez          #+#    #+#             */
/*   Updated: 2022/10/21 15:29:04 by adrperez         ###   ########.fr       */
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
	int		size;
	t_list	*aux;

	aux = lst; //le decimos que sean iguales, sería lo mismo que poner *aux = *lst (pero no se peude con structs)
	size = 1;
	if (!lst)
		return (0);
	while (aux->next != 0)
	{
		size++;
		aux = aux->content;
	}
	return (size);
}

















// int	size;

// 	size = 1;
// 	if (lst)
// 	{
// 		while (lst->next != 0)
// 		{
// 			size++;
// 			lst = lst->next;
// 		}
// 		return (size);
// 	}
// 	return (0);