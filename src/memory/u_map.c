/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_map.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradix <aradix@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 20:23:58 by aradix            #+#    #+#             */
/*   Updated: 2024/04/26 01:39:02 by aradix           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list/list.h"
#include "memory/memory.h"

#define MAP_CAPACITY 20

static void	*u_map_get(t_map *map, void *key)
{
	t_list				*node;
	const unsigned int	index = map->hash(key) % map->capacity;

	node = u_find_node(map->entries[index], key, map->cmp);
	if (node)
		return (node->value);
	return (0);
}

static bool	u_map_add(t_map *map, void *key, void *value)
{
	const unsigned int	index = map->hash(key) % map->capacity;
	t_list				*node;

	node = u_find_node(map->entries[index], key, map->cmp);
	if (node)
		node->value = value;
	else
	{
		node = malloc(sizeof(t_list));
		if (!node)
			return (false);
		node->key = key;
		node->value = value;
        // use add_node_front() here 
		node->next = map->entries[index];
		map->entries[index] = node;
	}
	return (true);
}

t_map	*u_map(compare_func cmp, hash_func hash)
{
	t_map	*map;

	map = malloc(sizeof(t_map));
	if (!map)
		return (NULL);
	map->entries = u_calloc(MAP_CAPACITY, sizeof(t_list *));
	if (!map->entries)
	{
		free(map);
		return (NULL);
	}
	map->capacity = MAP_CAPACITY;
	map->cmp = cmp;
	map->hash = hash;
	map->add = u_map_add;
	map->get = u_map_get;
	return (map);
}
