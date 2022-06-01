/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 12:58:32 by gromero-          #+#    #+#             */
/*   Updated: 2022/05/30 16:41:11 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//Encuentra el caracter (unsigned c) en (s) y duelve la posicion donde lo 
//encuentra o NULL si no lo encuentra en (n) bytes
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
		if (((char *)s)[i] == (char)c)
			return (&((void *)s)[i]);
	return (0);
}
