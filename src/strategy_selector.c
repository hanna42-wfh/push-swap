/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strategy_selector.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpiotrow <hpiotrow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 11:36:46 by mradkovi          #+#    #+#             */
/*   Updated: 2026/10/03 13:23:06 by hpiotrow         ###   ########.fr       */
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

/* merged has_bench and find_strategy because they were doing the same */
char	*find_strategy(char **argv, int numbers_start, int *bench)
{
	int		i;
	char	*strategy;

	i = 1;
	strategy = NULL;
	*bench = 0;
	while (i < numbers_start)
	{
		if (ft_strncmp(argv[i], "--bench", 8) == 0)
			*bench = 1;
		else if (strategy == NULL)
			strategy = argv[i];
		i++;
	}
	return (strategy);
}

int validate_flag(char *flag)
{
	if (ft_strncmp(flag, "--", 2) != 0)
		return (0); //no flag
	if (ft_strncmp("--simple", flag, 9) == 0)
		return (1);
	else if (ft_strncmp("--medium", flag, 9) == 0)
		return (1);
	else if (ft_strncmp("--complex", flag, 10) == 0)
		return (1);
	else if (ft_strncmp("--adaptive", flag, 11) == 0)
		return (1);
	else
		return (-1); //invalid flag
}

int validate_all_flags(int argc, char **argv)
{
	int i;
	int result;

	i = 1;
	while (i < argc)
	{
		if (ft_strncmp(argv[i], "--bench", 8) == 0)
			i++;
		else
		{
			result = validate_flag(argv[i]);
			if (result == 1)
				i++;
			else if (result == -1)
				return (-1);
			else
				break;
		}
	}
	return (i);
}
