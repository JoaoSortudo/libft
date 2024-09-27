/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-n <jpires-n@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-27 17:19:18 by jpires-n          #+#    #+#             */
/*   Updated: 2024-09-27 17:19:18 by jpires-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//ESSA FUNÇÃO PRECISA ENCONTRAR E PRINTAR A ÚLTIMA OCORRENCIA DE C NA
//STRING S!!!
char	*ft_strrchr(const char *s, int c)
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

// #include <stdio.h>
// #include <string.h>

// int	main(int argc, char **argv)
// {
// 	const char	str[20] = "Oi, eu sou o goku!";
// 	//int			c = 'e';
// 	printf("strrchr: %s\n", strrchr(str, atoi(argv[1])));
// 	printf("ft_strchr: %s\n", ft_strrchr(str, atoi(argv[1])));
// 	return (argc);
// }
