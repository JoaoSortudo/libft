/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-n <jpires-n@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:52:15 by jpires-n          #+#    #+#             */
/*   Updated: 2024/09/26 12:29:11 by jpires-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d = (unsigned char *)dest;
	const unsigned char	*s = (const unsigned char *)src;

	if (dest > src)
	{
		while (n--)
		{
			*d-- = *s--;
		}
	}
	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str1[10] = "Joao";
    char str1original[10] = "Joao";
	char str2[10] = "Iris";
	char str2original[10] = "Iris";
    printf("----------\nAntes do ft_memmove: %s\n----------\nAntes do memmove: %s", str1, str1original);
    ft_memmove(str1, str2, 2);
    memmove(str1original, str2original, 2);
	printf("\n----------\nDepois do ft_memmove: %s\n----------\nDepois do memmove: %s\n", str2, str2original);

	return (0);
}