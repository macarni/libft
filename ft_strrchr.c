/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:55:35 by adrperez          #+#    #+#             */
/*   Updated: 2022/09/27 19:31:59 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * It returns a pointer to the last occurrence of the character 
 * c in the string s.
 *
 * @param s The string to search.
 * @param c The character to search for.
 * 
 * @return A pointer to the last occurrence of the character 
 * c in the string s.
 */

char	*ft_strrchr(const char *s, int c)
{
	int	size;

	size = ft_strlen(s);
	s += size;
	while (size >= 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
		size--;
	}
	return (0);
}
