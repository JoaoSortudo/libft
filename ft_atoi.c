/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-n <jpires-n@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 16:35:59 by jpires-n          #+#    #+#             */
/*   Updated: 2024/09/25 17:28:51 by jpires-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	symb;

	result = 0;
	symb = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			symb *= -1;
		i++;
		if (str[i] == '+' || str[i] == '-')
			return (0);
	}
	while (str[i] > 47 && str[i] < 58)
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * symb);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(int argc, char **argv)
// {
// 	printf("esse é o inteiro(ft_atoi):%d\n",ft_atoi(argv[1]));
// 	printf("\nesse é o inteiro(atoi):%d\n",atoi(argv[1]));
// 	return (argc);
// }
