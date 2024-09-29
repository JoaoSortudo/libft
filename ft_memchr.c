/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-n <jpires-n@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-29 15:30:49 by jpires-n          #+#    #+#             */
/*   Updated: 2024-09-29 15:30:49 by jpires-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return (str + i);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(int argc, char **argv)
// {
// 	const char	str[20] = "Oi, eu sou o goku!";
// 	//int			c = 'e';
// 	printf("strchr: %p\n", memchr(str, atoi(argv[1]), atoi(argv[2])));
// 	printf("ft_strchr: %p\n", ft_memchr(str, atoi(argv[1]), atoi(argv[2])));
// 	return (argc);
// }
