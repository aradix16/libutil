/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_compare.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradix <aradix@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 00:30:24 by aradix            #+#    #+#             */
/*   Updated: 2024/04/25 22:13:47 by aradix           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "interface/interface.h"
#include "string/string.h"

bool	u_int_compare(const void *a, const void *b)
{
	int	arg1;
	int	arg2;

	arg1 = *(const int *)a;
	arg2 = *(const int *)b;
	return (arg1 > arg2) - (arg1 < arg2);
}

bool	u_string_compare(const void *a, const void *b)
{
	return (u_strcmp(a, b) == 0);
}
