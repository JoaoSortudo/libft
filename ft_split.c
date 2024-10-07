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

static int	ft_wordcount(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static char	**split(char const *s, char **array, int start, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c || s[i + 1] == '\0')
		{
			if (s[i + 1] == '\0' && s[i] != c)
				i++;
			if (i > start)
			{
				array[j] = malloc(i - start + 1);
				if (!array)
					return (NULL);
				ft_strlcpy(array[j], &s[start], i - start + 1);
				j++;
			}
			start = i + 1;
		}
		i++;
	}
	array[j] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!result)
		return (NULL);
	return (split(s, result, 0, c));
}

// #include <stdio.h>
// int	main(void)
// {
// 	char **result;
// 	char *str = "eu estou aqui";
// 	char delimiter = ' ';
// 	result = ft_split(str, delimiter);
// 	int i = 0;
// 	while (result[i] != NULL)
// 	{
// 		printf("%s\n", result[i]);
// 		//free(result[i]); //liberar cada palavra
// 		i++;
// 	}
// 	//free(result); //liberar o array de strings
// 	return (0);
// }