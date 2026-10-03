/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpiotrow <hpiotrow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 11:32:02 by hpiotrow          #+#    #+#             */
/*   Updated: 2026/10/03 11:33:01 by hpiotrow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	count_operations(int op_index)
{
	static int	op_counter[11];
	int	i;

	if (op_index < 0)
	{
		i = 0;
		while (i < 11)
		{
			op_counter[i] = 0;
			i++;
		}
		return (0);
	}
	if (op_index >= 100 && op_index <= 110)
	{
		return (op_counter[op_index - 100]);
	}
	if (op_index >= 0 && op_index <= 10)
	{
		op_counter[op_index]++;
		return (op_counter[op_index]);
	}
	return(op_counter[op_index]);
}
