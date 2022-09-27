/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:24:05 by adrperez          #+#    #+#             */
/*   Updated: 2022/09/27 18:44:51 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * If the destination is less than the source, then copy the source 
 * to the destination. Otherwise, copy
 * the source to the destination in reverse
 * 
 * @param dst This is the destination array where the content is 
 * to be copied, type-casted to a
 * pointer.
 * @param src pointer to the source array
 * @param len the number of bytes to copy
 * 
 * @return A pointer to the destination string dst.
 */
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst_aux;
	char	*src_aux;

	dst_aux = (char *)dst;
	src_aux = (char *)src;
	if (dst == NULL && src == NULL && len > 0)
		return (dst);
	if (dst < src)
		ft_memcpy(dst, src, len);
	else
	{
		while (len > 0)
		{
			len--;
			dst_aux[len] = src_aux[len];
		}
	}
	return (dst);
}
