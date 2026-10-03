/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   duplicity_checker.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradkovi <mradkovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 11:35:33 by mradkovi          #+#    #+#             */
/*   Updated: 2026/10/03 11:35:36 by mradkovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int duplicity_checker(char **splited_args, int len)
{
	int *splited_copy;
	int i;
	int j;

	splited_copy = (int *)malloc(sizeof(int) * (len));
	if (splited_copy == NULL)
		return (1);
	i = 0;
	while (i < len) //convert copy to int numbers
	{
		splited_copy[i] = ft_atoi(splited_args[i]);
		i++;
	}
	i = 0;
	while (i < len -1)//sorting array copy
	{
		j = 0;
		while (j < len - i - 1)
		{
			if (splited_copy[j] > splited_copy[j + 1])
				ft_swap(&splited_copy[j], &splited_copy[j + 1]);
			j++;
		}
		i++;
	}
	i = 0;
	while (i < (len - 1))//check duplicity
	{
		if (splited_copy[i] == splited_copy[i + 1])
		{	free(splited_copy);
			return (1);
		}
		i++;
	}
	free(splited_copy);
	return (0);
}
