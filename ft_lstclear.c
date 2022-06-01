/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 16:42:49 by gromero-          #+#    #+#             */
/*   Updated: 2022/05/11 14:22:12 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//Elimina y libera el nodo (lst) dado y todos los consecutivos de ese nodo, 
//utilizando la funcion(del) y free, al final el puntero de la lista debe
//ser NULL
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*last;

	if (!*lst)
		return ;
	while (*lst)
	{
		last = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = last;
	}
	*lst = 0;
}
