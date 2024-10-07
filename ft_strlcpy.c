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

// #include <stdio.h>
// #include <bsd/string.h>

// int	main(void)
// {
// 	char mystr[] = "";
// 	char mystr2[] = "JUANA";
// 	char orstr[] = "";
// 	char orstr2[] = "JUANA";

// 	printf("Minha: %zu\n", ft_strlcpy(mystr, mystr2, 3));
// 	printf("Minha: %s\n", mystr);
// 	printf("Original: %zu\n", strlcpy(orstr, orstr2, 3));
// 	printf("String original: %s\n", orstr);

// 	return (0);
// }