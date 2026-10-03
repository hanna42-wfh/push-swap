/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_all_flags.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradkovi <mradkovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 11:36:50 by mradkovi          #+#    #+#             */
/*   Updated: 2026/10/03 11:36:51 by mradkovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

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
