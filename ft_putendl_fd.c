/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:05:31 by adrperez          #+#    #+#             */
/*   Updated: 2022/09/29 15:13:41 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Write the string s to the file descriptor fd, followed by a newline
 * 
 * @param s The string to be printed.
 * @param fd file descriptor
 */
void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{	
		while (*s != '\0')
			ft_putchar_fd(*s++, fd);
		ft_putchar_fd('\n', fd);
	}
}
