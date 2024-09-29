/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-n <jpires-n@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 08:53:18 by jpires-n          #+#    #+#             */
/*   Updated: 2024/09/26 12:34:46 by jpires-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n--)
	{
		*p++ = (unsigned char)c;
	}
	return (s);
}

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int	main(int argc, char **argv)
// {
// 	char str1[10] = "Joao";
// 	char str2[10] = "Joao";
// 	printf("----------\nAntes do ft_memset: %s
//\n----------\nAntes do memset: %s", str1, str2);
// 	ft_memset(str1, 'j', atoi(argv[1]));
// 	memset(str2, 'j', atoi(argv[1]));
// 	printf("\n----------\nDepois do ft_memset: %s
//\n----------\nDepois do memset: %s\n", str1, str2);
// 	return (argc);
// }
