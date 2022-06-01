/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:32:46 by gromero-          #+#    #+#             */
/*   Updated: 2022/05/30 17:11:27 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//Concatena la cadena (src) en (dst), (dstsize) veces y devuelve el tamaño
//de la cadena concatenada 
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		i;
	size_t	sol;
	size_t	len_dst;
	size_t	len_src;

	i = 0;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (dstsize > len_dst)
		sol = len_dst + len_src;
	else
		sol = len_src + dstsize;
	while (src[i] && ((len_dst + 1) < dstsize))
		dst[len_dst++] = src[i++];
	dst[len_dst] = '\0';
	return (sol);
}
