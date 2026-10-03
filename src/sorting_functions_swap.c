/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_functions_1.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpiotrow <hpiotrow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 11:47:15 by hpiotrow          #+#    #+#             */
/*   Updated: 2026/10/03 11:50:35 by hpiotrow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void sa(t_stack *stack_a)
{
	swap_stack(stack_a);
	write(1, "sa\n", 3);
   	count_operations(0);
}

void sb(t_stack *stack_b)
{
	swap_stack(stack_b);
	write(1, "sb\n", 3);
	count_operations(1);
}

void ss(t_stack *stack_a, t_stack *stack_b)
{
	swap_stack(stack_a);
	swap_stack(stack_b);
	write (1, "ss\n", 3);
	count_operations(2);
}

void swap_stack(t_stack *stack)
{
	int swap;

	if (stack == NULL || stack->top == NULL || stack->top->next == NULL)
		return ;
	swap = stack->top->value;
	stack->top->value = stack->top->next->value;
	stack->top->next->value = swap;
}
