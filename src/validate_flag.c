/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_flag.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradkovi <mradkovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 11:37:03 by mradkovi          #+#    #+#             */
/*   Updated: 2026/10/03 11:37:08 by mradkovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

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
