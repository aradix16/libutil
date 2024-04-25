/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_hash.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradix <aradix@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:27:58 by aradix            #+#    #+#             */
/*   Updated: 2024/04/25 17:36:28 by aradix           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "numeric/numeric.h"

unsigned int	u_hash(const void *key)
{
	const char		*str = key;
	unsigned int	hash;
	int				c;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c;
	return (hash);
}
