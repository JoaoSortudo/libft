/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-n <jpires-n@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-29 16:17:32 by jpires-n          #+#    #+#             */
/*   Updated: 2024-09-29 16:17:32 by jpires-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (big [i + j] == little[j] && (i + j) < len)
			{
				j++;
				if (little[j] == '\0')
					return ((char *)big + i);
			}
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <bsd/string.h>

// int	main(void)
// {
// 	const char	str1[] = "eu sou assim";
// 	const char	str2[] = "";

// 	printf("\n%s\n", ft_strnstr(str1, str2, 20));
// 	printf("\n%s\n", strnstr(str1, str2, 20));
// }
