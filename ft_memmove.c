/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:06:52 by gromero-          #+#    #+#             */
/*   Updated: 2022/05/04 15:42:14 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//Copia (len) caracteres de (src) a (dst) pero de una forma no destructiva
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	if (dst > src)
	{
		i = len - 1;
		while (i >= 0 && i < len)
		{
			((unsigned char *)dst)[i] = ((const char *)src)[i];
			i--;
		}
	}
	else
	{
		dst = ft_memcpy(dst, src, len);
		/*i = 0;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((const char *)src)[i];
			i++;
		}*/
	}
	return (dst);
}
