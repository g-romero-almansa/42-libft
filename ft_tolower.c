/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:47:56 by gromero-          #+#    #+#             */
/*   Updated: 2022/05/04 15:49:29 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//Transforma (c) de mayuscula a minuscula
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
