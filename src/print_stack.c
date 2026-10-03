/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradkovi <mradkovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 11:36:28 by mradkovi          #+#    #+#             */
/*   Updated: 2026/10/03 11:36:29 by mradkovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void print_stack (t_stack *stack_a)
{
   	t_num	*current;

   	current = stack_a->top;
   	while (current != NULL)
   	{
   		ft_printf ("%d\n", current->value);
   		current = current->next;
   	}
}
