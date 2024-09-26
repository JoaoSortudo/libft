/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-n <jpires-n@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:35:40 by jpires-n          #+#    #+#             */
/*   Updated: 2024/09/26 11:12:17 by jpires-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char *p = (unsigned char *)s;

	while (n--)
	{
		*p++ = '\0';
	}
}

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int	main(int argc, char **argv)
{
	char str1[10] = "Joao";
        char str2[10] = "Joao";
        printf("----------\nAntes do ft_bzero: %s\n----------\nAntes do bzero: %s", str1, str2);
        ft_bzero(str1, atoi(argv[1]));
        bzero(str2, atoi(argv[1]));
	printf("\n----------\nDepois do ft_bzero: %s\n----------\nDepois do bzero: %s\n", str1, str2);

	return (argc);
}
