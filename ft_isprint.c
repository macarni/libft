/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 15:12:18 by adrperez          #+#    #+#             */
/*   Updated: 2022/09/20 17:01:28 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * If the character is between 32 and 126, 
 * return 1, otherwise return 0
 * 
 * @param c The character to be checked.
 * 
 * @return 1 if the character is printable, 0 if not.
 */
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
