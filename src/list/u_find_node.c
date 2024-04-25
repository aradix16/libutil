/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_find_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradix <aradix@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 21:13:55 by aradix            #+#    #+#             */
/*   Updated: 2024/04/26 00:56:18 by aradix           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list/list.h"

t_list	*u_find_node(t_list *lst, void *key, compare_func cmp)
{
	while (lst)
	{
		if (cmp(lst->key, key))
			return (lst);
		lst = lst->next;
	}
	return (0);
}
