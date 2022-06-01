/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:48:42 by gromero-          #+#    #+#             */
/*   Updated: 2022/05/30 17:36:19 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//Aloja suficiente memoria para una copia de (s1), hace la copia y la devuelve
char	*ft_strdup(const char *s1)
{
	char	*cpy;

	cpy = malloc ((ft_strlen(s1) + 1) * sizeof(char));
	if (!cpy)
		return (NULL);
	ft_memcpy(cpy, s1, ft_strlen(s1) + 1);
	return (cpy);
}
