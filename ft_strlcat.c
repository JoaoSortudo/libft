/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-n <jpires-n@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-27 14:17:54 by jpires-n          #+#    #+#             */
/*   Updated: 2024-09-27 14:17:54 by jpires-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	srclen;
	size_t	dstlen;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	j = 0;
	i = dstlen;
	if (size <= dstlen)
		return (srclen + size);
	while (src[j] != '\0' && j < size - dstlen - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}

	dst[i] = '\0';
	return (srclen + dstlen);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char	oi[10] = "Oi";
	char	oiOriginal[10] = "Oi";
	char	e[4] = "eee";

	printf("----------\nAntes do ft_strlcat: %s,%s ", oi, e);
	printf("\n----------\nAntes do strlcat: %s, %s", oiOriginal, e);

	size_t	len1 = ft_strlcat(oi, e, 7);
	size_t	len1original = strlcat(oiOriginal, e, 7);

	printf("\n----------\nDepois do ft_strlcat: %s\n----------
	\nDepois do strlcat: %s\n", oi, oiOriginal);
	printf("tamanho da dest concatenada(ft_strlcat): %zu\n", len1);
	printf("tamanho da dest concatenada(strlcat): %zu\n", len1original);
	return (0);
}*/