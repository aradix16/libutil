/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_calloc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradix <aradix@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 21:03:04 by aradix            #+#    #+#             */
/*   Updated: 2024/04/18 21:12:28 by aradix           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memory/memory.h"
#include <stdint.h>

void	*u_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = NULL;
	if ((nmemb > 0) && ((SIZE_MAX / nmemb) < size))
		return (NULL);
	ptr = (void *)malloc(size * nmemb);
	if (!ptr)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (ptr);
	u_memset(ptr, 0, nmemb * size);
	return (ptr);
}
