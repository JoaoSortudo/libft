/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-n <jpires-n@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-02 19:39:44 by jpires-n          #+#    #+#             */
/*   Updated: 2024-10-02 19:39:44 by jpires-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static void	ft_shift_char(unsigned int shift, char *c)
{
	if (*c >= 'A' && *c <= 'Z')
		*c = ((*c - 'A' + shift) % 26) + 'A';
	else if (*c >= 'a' && *c <= 'z')
		*c = ((*c - 'a' + shift) % 26) + 'a';
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int		i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	char	joao[] = "joao";

	printf("String original: %s\n", joao);
	ft_striteri(joao, ft_shift_char);
	printf("\nString alterada: %s\n", joao);
	return (0);
}
*/