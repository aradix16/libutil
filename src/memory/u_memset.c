/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_memset.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradix <aradix@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:43:34 by aradix            #+#    #+#             */
/*   Updated: 2024/04/18 21:11:11 by aradix           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memory/memory.h"

void	*u_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n-- > 0)
		*(p++) = (unsigned char)c;
	return (s);
}
