/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_strategy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradkovi <mradkovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 11:35:47 by mradkovi          #+#    #+#             */
/*   Updated: 2026/10/03 11:35:49 by mradkovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

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
