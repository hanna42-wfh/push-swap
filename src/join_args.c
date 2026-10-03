/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradkovi <mradkovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 11:36:23 by mradkovi          #+#    #+#             */
/*   Updated: 2026/10/03 11:36:24 by mradkovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

char *join_args(int argc, char **argv, int numbers_start)
{
	char	*joined;
	char	*tmp;
	int		i;

	i = numbers_start;
	joined = ft_strjoin(argv[i], " ");
	if (joined == NULL)
		return (NULL);
	i++;
	while (i < argc)
	{
		tmp = ft_strjoin(joined, argv[i]);
		free(joined);
		if (tmp == NULL)
			return (NULL);
		joined = ft_strjoin(tmp, " ");
		free(tmp);
		if (joined == NULL)
			return (NULL);
		i++;
	}
	return (joined);
}
