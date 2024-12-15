/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpires-n <jpires-n@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-29 17:32:36 by jpires-n          #+#    #+#             */
/*   Updated: 2024-09-29 17:32:36 by jpires-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t qt, size_t size)
{
	void	*box;
	size_t	box_size;

	box_size = qt * size;
	if (box_size / qt != size)
		return (0);
	box = malloc(box_size);
	if (box == 0)
		return (0);
	if (qt == 0 || size == 0)
		return (box);
	ft_memset(box, 0, box_size);
	return (box);
}
// #include <stdio.h>
// #include <stdlib.h>
// #include "libft.h"

// int main(void)
// {
// 	char *str;
// 	char *str2 = "joao";
// 	int	i = 0;

// 	str = ft_calloc(5, sizeof(char));
// 	while (str2[i] != '\0')
// 	{
// 		str[i] = str2[i];
// 		i++;
// 	}
// 	str[i] = '\0';
//     return (0);
// }
