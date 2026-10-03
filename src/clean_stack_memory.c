/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_stack_memory.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradkovi <mradkovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 11:35:03 by mradkovi          #+#    #+#             */
/*   Updated: 2026/10/03 11:38:08 by mradkovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void clean_stack_memory(t_stack *stack)
{
	t_num	*current_num;
	t_num	*swap;

	if (stack == NULL || stack->top == NULL)
		return ;
	current_num = stack->top;
	while (current_num)
	{
		swap = current_num->next;
		free(current_num);
		current_num = swap;
	}
	stack->top = NULL;
	stack->bottom = NULL;
	stack->size = 0;
}
