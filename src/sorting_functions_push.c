/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_functions_push.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpiotrow <hpiotrow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 11:57:55 by hpiotrow          #+#    #+#             */
/*   Updated: 2026/10/03 14:26:11 by hpiotrow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void pa(t_stack *stack_b, t_stack *stack_a)
{
	if (stack_b == NULL || stack_b->top == NULL || stack_a == NULL)
		return ;
	push_stack_top(stack_b, stack_a);
	write(1, "pa\n", 3);
	count_operations(9);
}

void pb(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a == NULL || stack_a->top == NULL || stack_b == NULL)
		return ;
	push_stack_top(stack_a, stack_b);
	write(1, "pb\n", 3);
	count_operations(10);
}

void push_stack_top(t_stack *src, t_stack *dest)
{
	t_num	*num;

	if (src == NULL || src->top == NULL || dest == NULL)
		return ;
	num = src->top;
	src->top = src->top->next;
	if (src->top != NULL)
		src->top->prev = NULL;
	else
		src->bottom = NULL;
	src->size--;
	num->next = dest->top;
	num->prev = NULL;
	if (dest->top != NULL)
		dest->top->prev = num;
	else
		dest->bottom = num;
	dest->top = num;
	dest->size++;
}
