/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-n <jpires-n@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-02 20:46:29 by jpires-n          #+#    #+#             */
/*   Updated: 2024-10-02 20:46:29 by jpires-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h> // Para malloc e free

// Função auxiliar que conta quantas palavras existem na string 's' separadas por 'c'
static int	ft_wordcount(char const *s, char c)
{
	int count = 0;
	int in_word = 0;
	
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

// Função auxiliar que aloca e retorna uma palavra extraída da string
static char	*ft_worddup(char const *s, int start, int end)
{
	char	*word;
	int		i = 0;

	word = (char *)malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

// Função principal que divide a string
char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i = 0;
	int		j = 0;
	int		word_start = -1;
	int		word_count = ft_wordcount(s, c);

	result = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c && word_start == -1)
			word_start = i;
		else if ((s[i] == c || s[i + 1] == '\0') && word_start != -1)
		{
			if (s[i + 1] == '\0' && s[i] != c)
				i++; // Inclui o último caractere se não for delimitador
			result[j] = ft_worddup(s, word_start, i);
			if (!result[j])
			{
				// Libera as palavras previamente alocadas se ocorrer erro
				while (j > 0)
					free(result[--j]);
				free(result);
				return (NULL);
			}
			j++;
			word_start = -1;
		}
		i++;
	}
	result[j] = NULL; // Termina o array com NULL
	return (result);
}

// Função auxiliar para liberar memória em caso de erro ou ao final
void	ft_free_split(char **split)
{
	int i = 0;

	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

#include <stdio.h>

int	main(void)
{
	char **result;
	char *str = "olha só isso!";
	char delimiter = ' ';

	result = ft_split(str, delimiter);
	int i = 0;
	while (result[i] != NULL)
	{
		printf("Palavra %d: %s\n", i + 1, result[i]);
		free(result[i]); // Liberar cada palavra
		i++;
	}
	free(result); // Liberar o array de strings
	return (0);
}