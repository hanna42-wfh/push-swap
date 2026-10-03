/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpiotrow <hpiotrow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 11:38:41 by mradkovi          #+#    #+#             */
/*   Updated: 2026/10/03 16:23:07 by hpiotrow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	stack_a;
	t_stack	stack_b;
	char	*strategy;
	int		numbers_start;
	int		bench;

	if (arg_checker(argc) == 1)
		return (1);
	numbers_start = validate_all_flags(argc, argv);
	if (numbers_start < 0 || numbers_start >= argc)
		return (write(2, "Error\n", 6), 1);
	strategy = find_strategy(argv, numbers_start, &bench);
	create_empty_stack(&stack_a);
	create_empty_stack(&stack_b);
	if (fill_stack_a(&stack_a, argc, argv, numbers_start) != 1)
	{
		clean_stack_memory(&stack_a);
		return (write(2, "Error\n", 6), 0);
	}
	if (run_push_swap(&stack_a, &stack_b, strategy, bench) != 1)
		return (1);
	return (0);
}

int	arg_checker(int argc)
{
	if (argc < 2)
	{
		return (1);
	}
	return (0);
}

int	run_push_swap(t_stack *stack_a, t_stack *stack_b, char *strategy, int bench)
{
	double	disorder;
	char	*plain_strategy;

	disorder = compute_disorder(stack_a);
	if (strategy != NULL)
	{
		strategy_selector(strategy, stack_a, stack_b);
		plain_strategy = get_plain_strategy(strategy);
	}
	else
		plain_strategy = "adaptive";
	if (bench)
		print_bench(stack_a, disorder, plain_strategy,
			get_complexity(plain_strategy, stack_a, stack_b, disorder));
	clean_stack_memory(stack_a);
	clean_stack_memory(stack_b);
	return (1);
}
