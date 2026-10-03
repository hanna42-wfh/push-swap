/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradkovi <mradkovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 11:35:40 by mradkovi          #+#    #+#             */
/*   Updated: 2026/10/03 11:35:42 by mradkovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int fill_stack_a(t_stack *stack_a, int argc, char **argv, int numbers_start)
{
	int		i;
	char	*joined;
	t_num	*new_num;
	char	**splited_args;

	joined = join_args(argc, argv, numbers_start);
	if (joined == NULL)
		return (0);
	splited_args =  ft_split(joined, ' ');
	free(joined);
   	if (splited_args == NULL || (validate_args(splited_args) != 1))
		return (clean_split_memory(splited_args), 0);
   	i = 0;
   	while (splited_args[i] != NULL)
   	{
	 	new_num = create_new_number(ft_atoi(splited_args[i]));
	   	if (new_num == NULL)
			return (clean_split_memory(splited_args), 0);
	   	push_new_number(stack_a, new_num);
	   	i++;
   	}
	return (clean_split_memory(splited_args), 1);
}
