/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:42:14 by gromero-          #+#    #+#             */
/*   Updated: 2022/05/30 17:29:19 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//Aloja suficiente espacio con malloc para (count) objetos (size) numero de 
//bytes y devuelve un puntero a la memoria alojada, la memoria sera 
//llenada de 0
void	*ft_calloc(size_t count, size_t size)
{
	void	*tmp;

	if ((count == SIZE_MAX && size > 1) || (size == SIZE_MAX && count > 1))
		return (NULL);
	tmp = malloc (count * size);
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, count * size);
	return (tmp);
}
