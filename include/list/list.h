/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradix <aradix@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 21:14:11 by aradix            #+#    #+#             */
/*   Updated: 2024/04/25 22:16:30 by aradix           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

# include <stdbool.h>

typedef struct s_list
{
	void			*key;
	void			*value;
	struct s_list	*next;
}					t_list;

typedef bool		(*compare_func)(const void *a, const void *b);

t_list				*u_find_node(t_list *lst, void *key, compare_func cmp);
t_list				*u_get_last_node(t_list *lst);
void				u_add_node_back(t_list **lst, t_list *new_node);

#endif
