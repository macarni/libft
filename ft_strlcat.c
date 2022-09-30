/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:00:04 by adrperez          #+#    #+#             */
/*   Updated: 2022/09/30 11:17:15 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function ft_strlcat() appends the null-terminated string 
 * src to the end of dst. It will append
 * at most size - strlen(dst) - 1 bytes, NUL-terminating the result
 * 
 * @param dst The destination string.
 * @param src The string to be appended.
 * @param dstsize the size of the destination buffer
 * 
 * @return The total length of the string it tried to create.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dst_size;
	size_t	src_size;

	if (!dst && dstsize == 0)
		return (0);
	j = 0;
	i = 0;
	dst_size = ft_strlen(dst);
	i = dst_size;
	src_size = ft_strlen(src);
	if (dstsize <= dst_size)
		return (src_size + dstsize);
	while (src[j] && j < dstsize - dst_size - 1)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (src_size + dst_size);
}
