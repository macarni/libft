/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 08:52:57 by adrperez          #+#    #+#             */
/*   Updated: 2022/09/27 19:33:12 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * It takes a string and a set of characters and returns a 
 * new string with the characters in the set
 * removed from the beginning and end of the string.
 * 
 * @param s1 The string to be trimmed.
 * @param set the characters to be trimmed
 * 
 * @return A pointer to a new string that is a copy of the 
 * string given as argument, without
 * whitespaces at the beginning or at the end of the string.
 */

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimed;
	size_t	start;
	size_t	end;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	trimed = ft_substr(s1, start, end - start + 1);
	if (!trimed)
		return (NULL);
	return (trimed);
}
