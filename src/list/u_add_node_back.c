/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_add_node_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradix <aradix@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 21:13:11 by aradix            #+#    #+#             */
/*   Updated: 2024/04/25 22:16:10 by aradix           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list/list.h"

void	u_add_node_back(t_list **lst, t_list *new_node)
{
	t_list	*node;

	if (*lst)
	{
		node = u_get_last_node(*lst);
		node->next = new_node;
	}
	else
		*lst = new_node;
}
