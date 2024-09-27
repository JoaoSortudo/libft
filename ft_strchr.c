/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-n <jpires-n@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-27 16:04:17 by jpires-n          #+#    #+#             */
/*   Updated: 2024-09-27 16:04:17 by jpires-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (str[i])
	{
		if (str[i] == (unsigned char)c)
			return (str + i);
		i++;
	}
	if (c == '\0')
		return (str + i);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	const char	str[20] = "Oi, eu sou o goku!";
	//int			c = 'e';
	printf("strchr: %s\n", strchr(str, atoi(argv[1])));
	printf("ft_strchr: %s\n", ft_strchr(str, atoi(argv[1])));
	return (argc);
}*/
