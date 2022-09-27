/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 13:16:37 by adrperez          #+#    #+#             */
/*   Updated: 2022/09/20 17:00:44 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The function ft_isdigit() returns 1 if the passed character is a digit, 
 * and 0 otherwise
 * 
 * @param c The character to be checked.
 * 
 * @return 1 if the character is a digit, 0 if not.
 */
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
