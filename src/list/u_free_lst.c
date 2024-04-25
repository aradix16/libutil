/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_free_lst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradix <aradix@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 00:58:58 by aradix            #+#    #+#             */
/*   Updated: 2024/04/26 01:39:18 by aradix           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list/list.h"


void    u_free(t_list **lst)
{
        t_list  *tmp1;
        t_list  *tmp2;

        tmp1 = *lst;
        while (tmp1)
        {
                tmp2 = tmp1->next;
                ft_lstdelone(tmp1, del);
                tmp1 = tmp2;
        }
        *lst = NULL;
}

