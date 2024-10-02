/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-n <jpires-n@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-02 18:29:31 by jpires-n          #+#    #+#             */
/*   Updated: 2024-10-02 18:29:31 by jpires-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static char	ft_shift_char(unsigned int shift, char c)
{
	if (c >= 'A' && c <= 'Z')
		return (((c - 'A' + shift) % 26) + 'A');
	else if (c >= 'a' && c <= 'z')
		return (((c - 'a' + shift) % 26) + 'a');
	else
		return (c);
}*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	i = 0;
	str = malloc(ft_strlen(s) + 1);
	if (!str)
		return (0);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>

int    main(void)
{
    char const  *joao = "jnyl";
    
    printf("String original: %s\n", joao);
    printf("\nString alterada: %s\n", ft_strmapi(joao, ft_shift_char));
    return (0);
}
*/