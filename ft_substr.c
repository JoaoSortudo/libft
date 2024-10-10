/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-n <jpires-n@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-01 12:11:58 by jpires-n          #+#    #+#             */
/*   Updated: 2024-10-01 12:11:58 by jpires-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (start >= ft_strlen(s))
	{
		substr = (char *)malloc(1);
		if (!substr)
			return (0);
		substr[0] = 0;
		return (substr);
	}
	if (len > (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	substr = malloc(len + 1);
	if (!substr)
		return (0);
	while (i < len && s[start + i])
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	str[] = "Eu só quero é ser feliz";
	char	*sub = ft_substr(str, ft_atoi(argv[1]), ft_atoi(argv[2]));

	printf("string: %s", str);
	printf("\nsubstring: %s\n", sub);
	return (argc);
}*/