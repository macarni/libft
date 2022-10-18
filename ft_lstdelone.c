/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 08:45:15 by adrperez          #+#    #+#             */
/*   Updated: 2022/10/18 08:56:48 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Parámetros lst: el nodo a liberar.
// del: un puntero a la función utilizada para liberar
// el contenido del nodo.
// Valor devuelto Nada
// Funciones autorizadas
// free
// Descripción Toma como parámetro un nodo ’lst’ y libera la
// memoria del contenido utilizando la función ’del’
// dada como parámetro, además de liberar el nodo. La
// memoria de ’next’ no debe liberarse.

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst)
	{
		del(lst->content);
		free(lst);	
	}
}