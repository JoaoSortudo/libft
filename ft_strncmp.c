/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-n <jpires-n@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-29 15:22:05 by jpires-n          #+#    #+#             */
/*   Updated: 2024-09-29 15:22:05 by jpires-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int     main(void)
// {
// 		char    str1[] = "oiehahah";
// 		char    str2[] = "oie";
// 		printf("\n%d\n", ft_strncmp(str1, str2, 7));
// 		printf("\n%d\n", strncmp(str1, str2, 7));
// }