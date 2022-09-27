/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:59:27 by adrperez          #+#    #+#             */
/*   Updated: 2022/09/27 18:38:38 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * It returns 1 if the character is a space, and 0 otherwise
 * 
 * @param c the character to check
 * 
 * @return 1 if the character is a space, 0 if not.
 */
int	is_space(char c)
{
	if ((c > 8 && c < 14) || c == 32)
		return (1);
	return (0);
}

/**
 * The function takes a string and returns an integer
 * 
 * @param str The string to be converted to an integer.
 * 
 * @return the number that is represented by the string.
 */
int	ft_atoi(const char *str)
{
	int		sign;
	int		i;
	size_t	num;

	i = 0;
	sign = 1;
	num = 0;
	while (is_space(str[i]) == 1)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}	
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	if (num > 2147483647 && sign > 0)
		return (-1);
	if (num > 2147483648 && sign < 0)
		return (0);
	return (sign * num);
}
