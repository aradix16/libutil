/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_strcmp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradix <aradix@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:53:55 by aradix            #+#    #+#             */
/*   Updated: 2024/04/25 22:17:29 by aradix           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string/string.h"

int	u_strcmp(const char *s1, const char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			break ;
		++s1;
		++s2;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
