/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:00:04 by adrperez          #+#    #+#             */
/*   Updated: 2022/09/30 10:01:10 by adrperez         ###   ########.fr       */
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
	size_t	dst_len;
	size_t	src_len;

	j = 0;
	i = 0;
	while (dst[i])
		i++;
	dst_len = i;
	src_len = ft_strlen(src);
	if (dstsize <= dst_len)
		return (src_len + dstsize);
	while (src[j] && j < dstsize - dst_len - 1)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (src_len + dst_len);
}
