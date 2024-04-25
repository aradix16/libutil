/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_get_last_node.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradix <aradix@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 19:17:15 by aradix            #+#    #+#             */
/*   Updated: 2024/04/25 21:04:33 by aradix           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list/list.h"

t_list	*u_get_last_node(t_list *lst)
{
	while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}
