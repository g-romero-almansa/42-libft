/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:43:55 by gromero-          #+#    #+#             */
/*   Updated: 2022/05/06 14:09:55 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//Escribe (len) caracteres iguales a (c) en la string (b)
void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
/*	if (!b)
		return (0);
					*/
	while (i < len)
		((unsigned char *)b)[i++] = c;
	return (b);
}
