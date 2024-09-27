/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-n <jpires-n@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-27 12:49:10 by jpires-n          #+#    #+#             */
/*   Updated: 2024-09-27 12:49:10 by jpires-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	i;

	srclen = ft_strlen(src);
	i = 0;
	if (size == 0)
	{
		return (srclen);
	}
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srclen);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char	str1[20] = "Joao Victor";
	char	str2[20] = "tchau";
	char	str2original[20] = "tchau";

	printf("----------\nAntes do ft_strlcpy: %s\n----------
	\nAntes do strlcpy: %s", str2, str2original);	

	size_t	len1 = ft_strlcpy(str2, str1, 12);
	size_t	len1original = strlcpy(str2original, str1, 12);

	printf("\n----------\nDepois do ft_strlcpy: %s\n----------
	\nDepois do strlcpy: %s\n", str2, str2original);
	printf("tamanho da src(ft_strlcpy): %zu\n", len1);
	printf("tamanho da src(strlcpy): %zu\n", len1original);
	return (0);
}*/