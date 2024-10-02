/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-n <jpires-n@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-01 14:15:38 by jpires-n          #+#    #+#             */
/*   Updated: 2024-10-01 14:15:38 by jpires-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	str = 0;
	if (s1 && set)
	{
		start = 0;
		end = strlen(s1) - 1;
		while (s1[start] && ft_strchr(set, s1[start]))
			start++;
		while (s1[end] && ft_strchr(set, s1[end]) && end > start)
			end--;
		str = malloc(end - start + 2);
		if (!str)
			return (0);
		ft_strlcpy(str, &s1[start], (end - start + 2));
	}
	return (str);
}

//NOTA: na linha 33 'end - start + 2' recebe esse +2 para compensar 1 que foi-
//removido do end e 1 para o caractere nulo.
// #include <stdio.h>

// int	main(void)
// {
// 	char const	str[] = "1233333eu123";
// 	char const	group[] = "123";

// 	printf("a string '%s' foi aparada para: %s\n", str, ft_strtrim(str, group));
// 	return (sizeof(char));
// }
