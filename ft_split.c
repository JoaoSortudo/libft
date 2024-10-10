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
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (count);
}

static void	cpy(char *array, char const *s, int end)
{
	int	i;

	i = 0;
	while (i < end)
	{
		array[i] = *s;
		i++;
		s++;
	}
	array[i] = '\0';
}

static char	**split(char const *s, char **array, char c)
{
	int	j;
	int	i;
	int	start;
	int	end;

	j = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		end = i - start;
		array[j] = (char *) malloc(sizeof(char) * (end + 1));
		if (!array[j])
			return (NULL);
		cpy(array[j++], &s[start], end);
	}
	array[j] = 0;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!result)
		return (NULL);
	return (split(s, result, c));
}

// #include <stdio.h>
// int	main(void)
// {
// 	char **result;
// 	char *str = "joao";
// 	char delimiter = ' ';

// 	result = ft_split(str, delimiter);
// 	// printf("%s\n", result[0]);
// 	printf("%s\n", result[1]);

// 	return (0);
// }