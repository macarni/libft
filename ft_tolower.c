/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 11:05:22 by apple             #+#    #+#             */
/*   Updated: 2022/09/27 19:35:28 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * If the character is uppercase, return the lowercase version, 
 * otherwise return the character
 * 
 * @param c The character to be converted.
 * 
 * @return The lowercase version of the character.
 */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
