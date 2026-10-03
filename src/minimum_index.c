/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minimum_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpiotrow <hpiotrow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 11:36:02 by hpiotrow          #+#    #+#             */
/*   Updated: 2026/10/03 11:36:11 by hpiotrow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int minimum_index(t_stack *stack_a)
{
	int	a;
	int	b;
	int	c;
	int	d;
	int	minimum_idx;

	a = stack_a->top->value;
	b = stack_a->top->next->value;
	c = stack_a->bottom->prev->value;
	d = stack_a->bottom->value;
	if ((a < b) && (a < c) && (a < d))
		minimum_idx = 0;
	else if ((b < a) && (b < c) && (b < d))
		minimum_idx = 1;
	else if ((c < a) && (c < b) && (c < d))
		minimum_idx = 2;
	else
		minimum_idx = 3;
	return (minimum_idx);
}
