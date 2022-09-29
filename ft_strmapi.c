/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:31:32 by adrperez          #+#    #+#             */
/*   Updated: 2022/09/29 13:10:21 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Ft_strmapi() applies the function f to each character of the string 
 * passed as argument by giving its
 * index as first argument to create a "fresh" new string 
 * (with malloc(3)) resulting from the
 * successive applications of f.
 * 
 * @param s The string to be iterated over.
 * @param f The function to be applied to each character of s.
 * 
 * @return A copy of the string s, with each character being passed 
 * through the function f.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		len_s;
	char	*copy;

	i = 0;
	if (!f || !s)
		return (0);
	len_s = ft_strlen(s);
	copy = malloc(sizeof(char) * len_s + 1);
	if (!copy)
		return (0);
	if (s)
	{
		while (s[i])
		{
			copy[i] = f(i, s[i]);
			i++;
		}
	}
	copy[i] = 0;
	return (copy);
}
