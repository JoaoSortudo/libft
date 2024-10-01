/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-n <jpires-n@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-01 13:10:45 by jpires-n          #+#    #+#             */
/*   Updated: 2024-10-01 13:10:45 by jpires-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	i;
	size_t	j;

	new_str = malloc(ft_strlen(s1)+ ft_strlen(s2) + 1);
	if (!new_str)
		return (0);
	i = 0;
	j = 0;
	while (s1[i])
	{
		new_str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		new_str[i] = s2[j];
		i++;
		j++;
	}
	new_str[i] = '\0';
	return (new_str);
}
/*
#include <stdio.h>

int	main(void)
{
	char str1[] = "Eu só quero é ser feliz, ";
	char str2[] = "andar tranquilamente na favela onde eu nasci.";
	char *str3 = ft_strjoin(str1, str2);
	printf("%s\n", str3);
	free(str3);
}
*/
