/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_4_5.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpiotrow <hpiotrow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 12:01:44 by hpiotrow          #+#    #+#             */
/*   Updated: 2026/10/03 13:27:07 by hpiotrow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	sort_three(t_stack *stack_a)
{
	int	a;
	int	b;
	int	c;

	if (stack_a == NULL || stack_a->size < 3)
		return ;
	a = stack_a->top->value;
	b = stack_a->top->next->value;
	c = stack_a->top->next->next->value;
	if (a > b && b > c)
	{
		sa(stack_a);
		rra(stack_a);
	}
	else if (a < b && b > c && a < c)
	{
		rra(stack_a);
		sa(stack_a);
	}
	else if (a < b && b > c && a > c)
		rra(stack_a);
	else if (a > b && b < c && a < c)
		sa(stack_a);
	else if (a > b && b < c && a > c)
		ra(stack_a);
}

void	sort_four(t_stack *stack_a, t_stack *stack_b)
{
	int	minimum_idx;

	minimum_idx = four_minimum_index(stack_a);
	if (minimum_idx == 1)
		sa(stack_a);
	else if (minimum_idx == 2)
	{
		rra(stack_a);
		rra(stack_a);
	}
	else if (minimum_idx == 3)
		rra(stack_a);
	if (compute_disorder(stack_a) > 0.000000)
	{
		pb(stack_a, stack_b);
		sort_three(stack_a);
		pa(stack_b, stack_a);
	}
}

void	sort_five(t_stack *stack_a, t_stack *stack_b)
{
	int	minimum_idx;

	if (stack_a == NULL || stack_b == NULL)
		return ;
	minimum_idx = five_minimum_index(stack_a);
	if (minimum_idx == 1)
		sa(stack_a);
	else if (minimum_idx == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (minimum_idx == 3)
	{
		rra(stack_a);
		rra(stack_a);
	}
	else if (minimum_idx == 4)
		rra(stack_a);
	if (compute_disorder(stack_a) > 0.000000)
	{
		pb(stack_a, stack_b);
		sort_four(stack_a, stack_b);
		pa(stack_b, stack_a);
	}
}

int	four_minimum_index(t_stack *stack_a)
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

int	five_minimum_index(t_stack *stack_a)
{
	int	a;
	int	b;
	int	c;
	int	d;
	int	e;

	a = stack_a->top->value;
	b = stack_a->top->next->value;
	c = stack_a->top->next->next->value;
	d = stack_a->bottom->prev->value;
	e = stack_a->bottom->value;
	if ((a < b) && (a < c) && (a < d) && (a < e))
		return (0);
	else if ((b < a) && (b < c) && (b < d) && (b < e))
		return (1);
	else if ((c < a) && (c < b) && (c < d) && (c < e))
		return (2);
	else if ((d < a) && (d < b) && (d < c) && (d < e))
		return (3);
	else
		return (4);
}
