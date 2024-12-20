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
	char		*result;
	int			size;
	int			i;
	long int	nb;

	size = ft_digitcount(n);
	result = malloc(size + 1);
	nb = n;
	if (!result)
		return (0);
	if (nb == 0)
		result[0] = '0';
	if (nb < 0)
	{
		result[0] = '-';
		nb = -nb;
	}
	i = size - 1;
	result[size] = '\0';
	while (nb > 0)
	{
		result[i--] = (nb % 10) + '0';
		nb /= 10;
	}
	return (result);
}

// #include <stdio.h>

// int main(void)
// {
// 	char *str = ft_itoa(-21);
// 	if (str) {
// 		printf("O int foi convertido na string: %s\n", str);
// 		free(str);
// 	} else {
// 		printf("erro na alocação de memória.\n");
// 	}
// 	return 0;
// }