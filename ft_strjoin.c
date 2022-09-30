/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 08:28:22 by adrperez          #+#    #+#             */
/*   Updated: 2022/09/30 11:29:22 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * It concatenates two strings.
 * 
 * @param s1 The first string to be concatenated.
 * @param s2 The string to be appended to the end of s1.
 * 
 * @return A pointer to a string.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*concat;
	int		len;

	if (!s2 || !s1)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (len == 0)
		return (NULL);
	concat = ft_calloc(len, sizeof(char));
	if (!concat)
		return (NULL);
	ft_strlcat(concat, s1, len);
	ft_strlcat(concat, s2, len);
	return (concat);
}
