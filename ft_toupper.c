/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 10:55:12 by apple             #+#    #+#             */
/*   Updated: 2022/09/27 19:35:49 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * If the character is lowercase, return the uppercase version of the character
 * 
 * @param c The character to be checked.
 * 
 * @return the uppercase equivalent of the character passed as an 
 * argument, if the argument is a
 * lowercase letter.
 */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
