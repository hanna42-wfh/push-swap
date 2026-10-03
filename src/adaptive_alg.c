/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adaptive_alg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpiotrow <hpiotrow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 12:27:43 by mradkovi          #+#    #+#             */
/*   Updated: 2026/10/03 16:19:45 by hpiotrow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

char	*adaptive_alg(t_stack *stack_a, t_stack *stack_b, double disorder)
{
	if (stack_a == NULL || stack_b == NULL)
		return ("none");
	if (disorder == 0.0)
		return ("none");
	else if (stack_a->size <= 5 || disorder < 0.2)
	{
		simple_alg(stack_a, stack_b);
		return ("O(n^2)");
	}
	else if (disorder < 0.5)
	{
		medium_alg(stack_a, stack_b);
		return ("O(n√n)");
	}
	complex_alg(stack_a, stack_b);
	return ("O(n*log(n))");
}
