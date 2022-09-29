/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 11:16:10 by adrperez          #+#    #+#             */
/*   Updated: 2022/09/29 09:43:38 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The function ft_strchr() locates the first occurrence of c (converted to 
 * a char) in the string pointed to by s
 * 
 * @param s The string to search.
 * @param c the character to search for
 * 
 * @return A pointer to the first occurrence of the character c in the string s.
 */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}	
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}
