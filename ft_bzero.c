/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:00:33 by adrperez          #+#    #+#             */
/*   Updated: 2022/09/23 12:26:52 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Ft_bzero() takes a pointer to a memory area and a size, 
 * and sets all the bytes in the memory area to
 * zero
 * 
 * @param s This is the pointer to the memory that needs to be filled with zeros.
 * @param n The number of bytes to be set to 0.
 */
void	ft_bzero(void *s, size_t n)
{
	while (n > 0)
	{
		n--;
		*(char *)s = 0;
		s++;
	}
}
