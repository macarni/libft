/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:22:45 by adrperez          #+#    #+#             */
/*   Updated: 2022/09/27 10:05:04 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// const char	*num_letters(char const *s, char c, char** matrix, int row);
// int	num_words(char const *s, char c);

// /*
// Parámetros s: La string a separar.
// c: El carácter delimitador.
// Valor devuelto El array de nuevas strings resulatente de la
// separación.
// NULL si falla la reserva de memoria.
// Funciones autorizadas
// malloc, free
// Descripción Reserva (utilizando malloc(3)) un array de strings
// resultante de separar la string ’s’ en substrings
// utilizando el caracter ’c’ como delimitador. El
// array debe terminar con un puntero NULL
// */

// char	**ft_split(char const *s, char c)
// {
// 	char	**matrix;
// 	int		rows;

// 	rows = num_words(s, c);
// 	if (rows == 0)
// 		return (NULL);
// 	matrix = malloc(sizeof(char *) * rows + 1);
// 	if (!matrix)
// 		return (NULL);
// 	while (rows)
// 	{
// 		s = num_letters(s, c, matrix, rows);
// 		if (!s)
// 			return (NULL);
// 		rows++;
// 	}
// 	return (matrix);
// }

// int	num_words(char const *s, char c)
// {	
// 	int	num;
// 	unsigned int flag;

// 	num = 0;
// 	flag = 0;
// 	while (s)
// 	{
// 		if (*s == c)
// 		{
// 			if (flag == 1)
// 				flag = 0;
// 		}
// 		else
// 		{
// 			if (flag == 0)
// 			{
// 				flag = 1;
// 				num++;
// 			}
// 		}	
			
// 		s++;
// 	}	
// 	return (num);
// }

// const char	*num_letters(char const *s, char c, char** matrix, int row)
// {
// 	int	letters;

// 	letters = 0;
// 	while (s && *s != c)
// 	{
// 		letters++;
// 		c++;
// 		s++;
// 	}
// 	matrix[row] = malloc(sizeof(char) * letters);
// 	// if (matrix[row] == 0)
// 	// {
// 	// 	free(matrix);
// 	// 	return (NULL);
// 	// }
// 	ft_strlcpy(matrix[row], s, letters);
// 	c++;
// 	return (s);
// }