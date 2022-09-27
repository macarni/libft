/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:41:14 by adrperez          #+#    #+#             */
/*   Updated: 2022/09/20 17:02:22 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Ft_memset() takes a pointer to a memory area, a byte value, 
 * and a size, and fills the memory area with the given byte value
 * 
 * @param b This is the pointer to the memory area to be filled.
 * @param c the character to fill the memory with
 * @param len The number of bytes to be set to the value c.
 * 
 * @return A pointer to the beginning of the memory area b.
 */
void	*ft_memset(void *b, int c, size_t len)
{
	int	i;

	i = 0;
	while (len > 0)
	{
		len--;
		((unsigned char *)b)[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
