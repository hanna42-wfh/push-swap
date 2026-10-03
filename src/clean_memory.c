/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_memory.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpiotrow <hpiotrow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 13:39:57 by hpiotrow          #+#    #+#             */
/*   Updated: 2026/10/03 13:41:43 by hpiotrow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void clean_split_memory(char **splited_args)
{
	int	i;

	if (splited_args == NULL)
		return ;
	i = 0;
	while (splited_args[i] != NULL)
	{
		free(splited_args[i]);
		i++;
	}
	free(splited_args);
}

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
