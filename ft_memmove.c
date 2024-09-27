/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-n <jpires-n@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:52:15 by jpires-n          #+#    #+#             */
/*   Updated: 2024/09/27 09:17:10 by jpires-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (dest > src)
	{
		i = n;
		while (i--)
		{
			d[i] = s[i];
		}
	}
	else
	{
		while (n--)
		{
			*d++ = *s++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str1[20] = "01234";
    char str1original[20] = "01234";
	char str2[20] = "1234";
	char str2original[20] = "1234";
    printf("----------\nAntes do ft_memmove: %s\n----------
	\nAntes do memmove: %s", str1, str1original);
    ft_memmove(str1, str2, 3);
    memmove(str1original, str2original, 3);
	printf("\n----------\nDepois do ft_memmove: %s\n----------
	\nDepois do memmove: %s\n", str1, str1original);

	return (0);
}
*/