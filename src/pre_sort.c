/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pre_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpiotrow <hpiotrow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 12:05:57 by mradkovi          #+#    #+#             */
/*   Updated: 2026/10/03 14:09:56 by hpiotrow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	bubble_sort(int *temp_array, int len)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (i < len - 1)
	{
		j = 0;
		while (j < len - i - 1)
		{
			if (temp_array[j] > temp_array[j + 1])
				ft_swap(&temp_array[j], &temp_array[j + 1]);
			j++;
		}
		i++;
	}
}

void	pre_sort(t_stack *stack_a)
{
	t_num	*curr;
	int		*temp_array;
	int		i;
	int		len;

	len = stack_a->size;
	temp_array = (int *)malloc(sizeof(int) * len);
	if (temp_array == NULL)
		return ;
	curr = stack_a->top;
	i = 0;
	while (curr != NULL)
	{
		temp_array[i] = curr->value;
		curr = curr->next;
		i++;
	}
	bubble_sort(temp_array, len);
	assign_index(temp_array, stack_a);
	free(temp_array);
}

void	assign_index(int *str, t_stack *stack_a)
{
	int		i;
	t_num	*curr;

	curr = stack_a->top;
	while (curr != NULL)
	{
		i = 0;
		while (str[i] != curr->value)
			i++;
		curr->index = i;
		curr = curr->next;
	}
}
