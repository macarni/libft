/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 10:36:49 by adrperez          #+#    #+#             */
/*   Updated: 2022/09/27 18:43:32 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * It compares the first n bytes of the memory areas s1 and s2
 * 
 * @param s1 This is the first string to be compared.
 * @param s2 The string to be compared.
 * @param n The number of bytes to compare.
 * 
 * @return The difference between the first two bytes that differ 
 * in the two strings.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*aux1;
	unsigned char	*aux2;

	aux1 = (unsigned char *)s1;
	aux2 = (unsigned char *)s2;
	while (n > 0 && (aux1 != 0 || aux2 != 0))
	{
		if (*aux1 != *aux2)
			return (*aux1 - *aux2);
		aux1++;
		aux2++;
		n--;
	}
	return (0);
}
