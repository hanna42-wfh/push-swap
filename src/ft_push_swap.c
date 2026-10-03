/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradkovi <mradkovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 11:38:41 by mradkovi          #+#    #+#             */
/*   Updated: 2026/10/03 11:38:44 by mradkovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_push_swap.h"

int main (int argc, char **argv)
{
	char *strategy; //nessesary for benchmark output
	int numbers_start; //argument which contents numbers - first after all passible flags
	int bench; //for bench flag checking

	if (arg_checker(argc) == 1)
		return (1);
	numbers_start = validate_all_flags(argc, argv);
	if (numbers_start < 0 || numbers_start >= argc)
		return (write(2, "Error\n", 6), 1);
	strategy = find_strategy(argv, numbers_start, &bench);
    //next main part like before, because norminette check lines
	if (run_push_swap(argc, argv, numbers_start, strategy, bench) != 1)
		return (1);
	return (0);
}
