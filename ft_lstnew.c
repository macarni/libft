/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:41:19 by adrperez          #+#    #+#             */
/*   Updated: 2022/10/07 09:35:16 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * It creates a new node with the content passed as parameter.
 * 
 * @param content the content of the new node
 * 
 * @return A pointer to a new node.
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*new_nodo;

	new_nodo = malloc(sizeof(t_list));
	if(!new_nodo)
		return (NULL);
	new_nodo->content = content;
	new_nodo->next = 0;
	return new_nodo;

}
