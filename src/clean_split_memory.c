/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_split_memory.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradkovi <mradkovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 11:37:57 by mradkovi          #+#    #+#             */
/*   Updated: 2026/10/03 11:38:05 by mradkovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void clean_split_memory(char **splited_args)
{
	int	i;

	if (splited_args == NULL)
		return ;
	i = 0;
	while (splited_args[i] != NULL)
	{
		free(splited_args[i]);
		i++;
	}
	free(splited_args);
}
