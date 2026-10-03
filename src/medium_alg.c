/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium_alg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpiotrow <hpiotrow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 12:05:49 by mradkovi          #+#    #+#             */
/*   Updated: 2026/10/03 13:33:51 by hpiotrow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void medium_alg(t_stack *stack_a, t_stack *stack_b)
{
	int	chunk_size;
	int	num_chunks;
	int	chunk_start;
	int	chunk_end;
	int	c;

	if (stack_a == NULL || stack_b == NULL)
		return;
	if (compute_disorder(stack_a) == 0.000000)
		return;
	pre_sort(stack_a);
	chunk_size = ft_sqrt(stack_a->size) * 1.8;
	num_chunks = (stack_a->size + chunk_size - 1) / chunk_size;
	c = 0;
	while (c < num_chunks)
	{
		chunk_start = c * chunk_size;
		chunk_end = chunk_start + chunk_size - 1;
		check_chunk(stack_a, stack_b, chunk_start, chunk_end);
		c++;
	}
	while (stack_b->size > 0)
	{
		bring_to_top_b(stack_b, find_max(stack_b));
		pa(stack_b, stack_a);
	}
}

void	check_chunk(t_stack *stack_a, t_stack *stack_b, int chunk_start, int chunk_end)
{
	int	i;
	int	j;

	i = 0;
	j = stack_a->size;
	while (i < j)
	{
		if (stack_a->top->index >= chunk_start && stack_a->top->index <= chunk_end)
			pb(stack_a, stack_b);
		else
			ra(stack_a);
		i++;
	}
}

int	find_max(t_stack *stack)
{
	int		max;
	int		max_position;
	int		i;
	t_num	*current_num;

	current_num = stack->top;
	max = current_num->value;
	max_position = 0;
	i = 0;
	while (current_num != NULL)
	{
		if (current_num->value > max)
		{
			max = current_num->value;
			max_position = i;
		}
		current_num = current_num->next;
		i++;
	}
	return (max_position);
}

void	bring_to_top_b(t_stack *stack_b, int position)
{

	if ((stack_b->size / 2) <= position)
		position = (stack_b->size - position) * (-1);
	if (position < 0)
	{
		while (position < 0)
		{
			rrb(stack_b);
			position++;
		}
	}
	else
	{
		while (position > 0)
		{
			rb(stack_b);
			position--;
		}
	}
}

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i <= 46340 && i * i < nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (i);
}
