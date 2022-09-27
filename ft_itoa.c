/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 08:53:20 by adrperez          #+#    #+#             */
/*   Updated: 2022/09/27 18:42:30 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_size(int n)
{	
	int	size;

	size = 1;
	if (n < 0)
	{
		size++;
		n *= -1;
	}
	while (n > 9)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

static char	*special_num(int n)
{
	if (n == 0)
		return (ft_strdup("0"));
	else
		return (ft_strdup("-2147483648"));
	return (NULL);
}

/**
 * It takes an integer and returns a string representation of that integer
 * 
 * @param n the number to be converted to a string
 * 
 * @return A string of the number.
 */
char	*ft_itoa(int n)
{
	char	*num;
	int		size;

	if (n == 0 || n == -2147483648)
		return (special_num(n));
	size = num_size(n);
	num = malloc(sizeof(char) * (size + 1));
	if (!num)
		return (NULL);
	if (n < 0)
	{
		num[0] = '-';
		n *= -1;
	}	
	num[size--] = '\0';
	while (n > 0)
	{
		num[size] = (unsigned char)(n % 10 + '0');
		n = n / 10;
		size--;
	}
	return (num);
}
