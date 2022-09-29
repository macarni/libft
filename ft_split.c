/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:22:45 by adrperez          #+#    #+#             */
/*   Updated: 2022/09/29 14:47:31 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

/**
 * It takes a string and a character, and returns a matrix of strings,
 * each string being a word from
 * the original string, separated by the character
 * 
 * @param s The string to be split.
 * @param c the character to split the string by
 * 
 * @return A pointer to a pointer to a char.
 */
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
