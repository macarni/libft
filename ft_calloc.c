/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:27:43 by adrperez          #+#    #+#             */
/*   Updated: 2022/09/30 08:27:39 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * It allocates memory for a given size and fills it with zeros.
 * 
 * @param count The number of elements to be allocated.
 * @param size The bytes of memory each of each elements to be allocated.
 * 
 * @return A pointer to the allocated memory.
 */
void	*ft_calloc(size_t count, size_t size)
{
	void	*pointer;
	int		num;

	num = count * size;
	if (num == 1 && count != 1)
		return (NULL);
	pointer = malloc(num);
	if (!pointer)
		return (0);
	ft_bzero(pointer, num);
	return (pointer);
}
