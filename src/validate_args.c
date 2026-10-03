/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradkovi <mradkovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 11:36:55 by mradkovi          #+#    #+#             */
/*   Updated: 2026/10/03 11:36:56 by mradkovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int validate_args(char **splited_args)
{
	int i;
	int j;

	i = 0;
	while (splited_args[i] != NULL)
	{
		j = 0;
		if (splited_args[i][j] == '+' || splited_args[i][j] == '-')
			j++;
		if (splited_args[i][j] == '\0')
			return (0); //invalid argument only +,- no next digit
		while (splited_args[i][j] != '\0')
		{
			if ((splited_args[i][j] < '0') || (splited_args[i][j] > '9'))
				return (0); //invalid argument no digit
			j++;
		}
		i++;
	}
	if (duplicity_checker(splited_args, i) == 1)
		return (0);
	return (1);
}
