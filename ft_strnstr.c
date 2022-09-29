/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:49:12 by adrperez          #+#    #+#             */
/*   Updated: 2022/09/29 08:43:39 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function ft_strnstr() locates the first occurrence of the 
 * null-terminated string needle in the string haystack, where not 
 * more than len characters are searched. Characters that appear after a
 * `\0' character are not searched
 * 
 * @param haystack The string to search in
 * @param needle the string to be found
 * @param len the maximum number of characters to search
 * 
 * @return a pointer to the first occurrence of the substring needle in the 
 * string haystack.
 */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	f;
	char	*aux_haystack;
	char	*aux_needle;

	aux_haystack = (char *)haystack;
	aux_needle = (char *)needle;
	i = 0;
	if (aux_needle[i] == '\0')
		return (aux_haystack);
	while (i < len && aux_haystack[i] != '\0')
	{
		f = 0;
		while (aux_needle[f] && aux_needle[f] == aux_haystack[f + i]
			&& aux_haystack[i + f] && i + f < len)
			f++;
		if (aux_needle[f] == '\0' && f <= len)
			return (aux_haystack + i);
		i++;
	}	
	return (NULL);
}
