/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:29:11 by adrperez          #+#    #+#             */
/*   Updated: 2022/09/29 15:01:36 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function ft_memchr() locates the first occurrence of c 
 * (converted to an unsigned char) in string
 * 
 * @param s This is the pointer to the first byte of the memory area.
 * @param c The character to search for.
 * @param n The number of bytes to be checked.
 * 
 * @return A pointer to the first occurrence of the character c 
 * in the first n bytes of the string
 * pointed to, by the argument s.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*aux;

	aux = (unsigned char *)s;
	while (n > 0)
	{
		if (*aux == (unsigned char)c)
			return (aux);
		aux++;
		n--;
	}	
	return (0);
}
