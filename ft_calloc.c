/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:27:43 by adrperez          #+#    #+#             */
/*   Updated: 2022/09/23 15:20:58 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * It allocates memory for a given size and fills it with zeros.
 * 
 * @param count The number of elements to be allocated.
 * @param size The number of elements to be allocated.
 * 
 * @return A pointer to the allocated memory.
 */
void	*ft_calloc(size_t count, size_t size)
{
	void	*space;
	int		num;

	num = count * size;
	if (num == 1 && count != 1)
		return (NULL);
	space = malloc(num);
	if (!space)
		return (0);
	ft_bzero(space, num);
	return (space);
}
