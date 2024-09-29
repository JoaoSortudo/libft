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

void	*ft_calloc(size_t qtd, size_t tam)
{
	void	*box;
	size_t	size;

	if (qtd == 0 || tam == 0)
	{
		return (0);
	}
	if (size / qtd != tam)
		return (0);
	size = qtd * tam;
	box = malloc(size);
	if (box == 0)
		return (0);
	ft_memset(box, 0, size);
	return (box);
}