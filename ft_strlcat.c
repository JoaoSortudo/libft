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

// #include <stdio.h>
// #include <bsd/string.h>

// int	main(void)
// {
// 	char *mystr = ft_strdup("123");
// 	char *mystr2 = ft_strdup("JUANA");
// 	char orstr[] = "123";
// 	char orstr2[] = "JUANA";

// 	printf("Minha: %zu\n", ft_strlcat(mystr, mystr2, 7));
// 	printf("Minha: %s\n", mystr);
// 	printf("Original: %zu\n", strlcat(orstr, orstr2, 7));
// 	printf("String original: %s\n", orstr);
// 	return (0);
// }