/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpiotrow <hpiotrow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 11:36:55 by mradkovi          #+#    #+#             */
/*   Updated: 2026/10/03 14:11:40 by hpiotrow         ###   ########.fr       */
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

int duplicity_checker(char **splited_args, int len)
{
	int *splited_copy;
	int i;
	int j;
	long num;

	splited_copy = (int *)malloc(sizeof(int) * (len));
	if (splited_copy == NULL)
		return (1);
	i = 0;
	while (i < len) //convert copy to int numbers
	{
		num = ft_atoi(splited_args[i]);
		if (num > 2147483647 || num < -2147483648)
			return (1);
		splited_copy[i] = num;
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

void ft_swap(int *a, int *b)
{
	int swap;
	swap = *a;
	*a = *b;
	*b = swap;
}
