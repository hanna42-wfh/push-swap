/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strategy_selector.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradkovi <mradkovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 11:36:46 by mradkovi          #+#    #+#             */
/*   Updated: 2026/10/03 11:39:09 by mradkovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

// removed dead code: adaptive, as now it's checked in run_push_swap //
void strategy_selector(char *flag, t_stack *stack_a, t_stack *stack_b)
{
	if (ft_strncmp("--simple", flag, 9) == 0)
		simple_alg(stack_a, stack_b);
	if (ft_strncmp("--medium", flag, 9) == 0)
		medium_alg(stack_a, stack_b);
	if (ft_strncmp("--complex", flag, 10) == 0)
		complex_alg(stack_a, stack_b);
}
