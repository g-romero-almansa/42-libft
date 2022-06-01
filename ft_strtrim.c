/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 15:14:00 by gromero-          #+#    #+#             */
/*   Updated: 2022/06/01 12:51:11 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//Eliminar los caracteres de (set) de (s1) desde el principio y el final y 
//devolver la string resultante reservandole memoria
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}
