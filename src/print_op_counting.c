/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_op_counting.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpiotrow <hpiotrow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 11:20:07 by hpiotrow          #+#    #+#             */
/*   Updated: 2026/10/03 12:16:09 by hpiotrow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void print_op_counting(void)
{
	write(2, "sa: ", 4);
	ft_putnbr_fd(count_operations(100), 2);
	write(2, "\nsb: ", 5);
	ft_putnbr_fd(count_operations(101), 2);
	write(2, "\nss: ", 5);
	ft_putnbr_fd(count_operations(102), 2);
	write(2, "\nra: ", 5);
	ft_putnbr_fd(count_operations(103), 2);
	write(2, "\nrb: ", 5);
	ft_putnbr_fd(count_operations(104), 2);
	write(2, "\nrr: ", 5);
	ft_putnbr_fd(count_operations(105), 2);
	write(2, "\nrra: ", 6);
	ft_putnbr_fd(count_operations(106), 2);
	write(2, "\nrrb: ", 6);
	ft_putnbr_fd(count_operations(107), 2);
	write(2, "\nrrr: ", 6);
	ft_putnbr_fd(count_operations(108), 2);
	write(2, "\npa: ", 5);
	ft_putnbr_fd(count_operations(109), 2);
	write(2, "\npb: ", 5);
	ft_putnbr_fd(count_operations(110), 2);
	write(2, "\n", 1);
}

void	ft_put_percent_fd(double disorder, int fd)
{
	int	percent;

	percent = (int)(disorder * 10000);
	ft_putnbr_fd(percent / 100, fd);
	write(fd, ".", 1);
	if (percent % 100 < 10)
		write(fd, "0", 1);
	ft_putnbr_fd(percent % 100, fd);
	write(fd, "%\n", 2);
}
