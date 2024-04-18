/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_strlen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradix <aradix@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:05:03 by aradix            #+#    #+#             */
/*   Updated: 2024/04/18 20:20:35 by aradix           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string/string.h"

size_t	u_strlen(const char *s)
{
	const char	*start = s;

	while (*s)
		s++;
	return (s - start);
}
