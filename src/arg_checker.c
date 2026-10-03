/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_checker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradkovi <mradkovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 11:37:31 by mradkovi          #+#    #+#             */
/*   Updated: 2026/10/03 11:37:32 by mradkovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

/* subject says it should return nothing if no arguments */
int arg_checker(int argc)
{
	if (argc < 2)
	{
		return (1);
	}
	return (0);
}
