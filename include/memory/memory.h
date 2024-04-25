/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradix <aradix@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 20:16:34 by aradix            #+#    #+#             */
/*   Updated: 2024/04/25 20:17:32 by aradix           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEMORY_H
# define MEMORY_H

# include <stdbool.h>
# include <stdlib.h>

typedef struct s_list	t_list;
typedef struct s_map	t_map;
typedef bool			(*compare_func)(const void *a, const void *b);
typedef unsigned int	(*hash_func)(const void *key);

typedef struct s_map
{
	t_list				**entries;
	unsigned int		capacity;
	bool				(*cmp)(const void *a, const void *b);
	unsigned int		(*hash)(const void *key);
	bool				(*add)(t_map *map, void *key, void *value);
	void				*(*get)(t_map *map, void *key);

}						t_map;

t_map					*u_map(compare_func cmp, hash_func hash);
void					*u_calloc(size_t nmemb, size_t size);
void					*u_memset(void *s, int c, size_t n);

#endif
