/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 13:07:00 by adrperez          #+#    #+#             */
/*   Updated: 2022/09/20 17:00:10 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The function ft_isalpha() returns 1 if the character passed as 
 * an argument is an alphabetic character, and 0 if it is not
 * 
 * @param c The character to be checked.
 * 
 * @return 1 if the character is a letter, 0 if not.
 */
int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
