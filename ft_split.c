/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:22:45 by adrperez          #+#    #+#             */
/*   Updated: 2022/09/29 13:08:52 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

// static void	fill_matrix(char const *s, char** matrix, int row, int size)
// {
// 	int i;

// 	i = 0;
// 	while (--size > 0)
// 	{
// 		matrix[row][i] = (char)*s;
// 		s++;
// 		i++;
// 	}
// 	matrix[row][i] = 0;
// }

static int	num_words(char const *s, char c)
{	
	int				num;
	unsigned int	flag;

	num = 0;
	flag = 0;
	while (*s)
	{
		if (*s == c && flag == 1)
			flag = 0;
		else if (*s != c && flag == 0)
		{
			flag = 1;
			num++;
		}
		s++;
	}	
	return (num);
}

static void	ft_free_matrix(char **matrix, int row)
{
	while (row >= 0)
	{
		free(matrix[row]);
		row--;
	}
	free(matrix);
}

static const char	*num_letters(char const *s, char c, char **matrix, int row)
{
	int	letters;
	int	i;

	i = 0;
	letters = 0;
	while (s[i] == c)
		i++;
	while (s[i] && s[i] != c)
	{
		letters++;
		i++;
	}
	matrix[row] = malloc(sizeof(char) * (letters + 1));
	if (matrix[row] == 0)
	{
		ft_free_matrix(matrix, row);
		return (NULL);
	}
	s = s + i - letters;
	ft_strlcpy(matrix[row], s, letters + 1);
	return (s + letters + 1);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	int		rows;
	int		words;

	if (!s)
		return (0);
	rows = num_words(s, c);
	matrix = malloc(sizeof(char *) * (rows + 1));
	if (!matrix)
		return (NULL);
	words = 0;
	while (words < rows)
	{
		s = num_letters(s, c, matrix, words);
		if (!s)
			return (NULL);
		words++;
	}
	matrix[rows] = 0;
	return (matrix);
}
