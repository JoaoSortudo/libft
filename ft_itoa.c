/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-n <jpires-n@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-01 15:09:06 by jpires-n          #+#    #+#             */
/*   Updated: 2024-10-01 15:09:06 by jpires-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digitcount(int nb)
{
	int	count;

	count = 0;
	if (nb <= 0)
	{
		count++;
	}
	while (nb != 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		size;
	int		i;

	size = ft_digitcount(n);
	result = malloc(size + 1);
	if (!result)
		return (0);
	if (n == 0)
		result[0] = '0';
	if (n < 0)
	{
		result[0] = '-';
		n = -n;
	}
	i = size - 1;
	result[size] = '\0';
	while (n > 0)
	{
		result[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	return (result);
}

// #include <stdio.h>

// int main(void)
// {
// 	char *str = ft_itoa(-21);
// 	if (str) {
// 		printf("O int foi convertido na string: %s\n", str);
// 		free(str); // Liberar a memória alocada
// 	} else {
// 		printf("Falha na alocação de memória.\n");
// 	}
// 	return 0;
// }