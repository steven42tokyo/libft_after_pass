/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthacker <sthacker@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 04:57:50 by sthacker          #+#    #+#             */
/*   Updated: 2023/01/25 04:57:57 by sthacker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	calculate(int n, int num_digits, int fd)
{
	if (num_digits >= 10)
		ft_putchar_fd(48 + n % 10000000000 / 1000000000, fd);
	if (num_digits >= 9)
		ft_putchar_fd(48 + n % 1000000000 / 100000000, fd);
	if (num_digits >= 8)
		ft_putchar_fd(48 + n % 100000000 / 10000000, fd);
	if (num_digits >= 7)
		ft_putchar_fd(48 + n % 10000000 / 1000000, fd);
	if (num_digits >= 6)
		ft_putchar_fd(48 + n % 1000000 / 100000, fd);
	if (num_digits >= 5)
		ft_putchar_fd(48 + n % 100000 / 10000, fd);
	if (num_digits >= 4)
		ft_putchar_fd(48 + n % 10000 / 1000, fd);
	if (num_digits >= 3)
		ft_putchar_fd(48 + n % 1000 / 100, fd);
	if (num_digits >= 2)
		ft_putchar_fd(48 + n % 100 / 10, fd);
	if (num_digits >= 1)
		ft_putchar_fd(48 + n % 10 / 1, fd);
}

static int	count_digits(int n)
{
	if (n == 0)
		return (1);
	else if (n / 10 == 0)
		return (1);
	else if (n / 100 == 0)
		return (2);
	else if (n / 1000 == 0)
		return (3);
	else if (n / 10000 == 0)
		return (4);
	else if (n / 100000 == 0)
		return (5);
	else if (n / 1000000 == 0)
		return (6);
	else if (n / 10000000 == 0)
		return (7);
	else if (n / 100000000 == 0)
		return (8);
	else if (n / 1000000000 == 0)
		return (9);
	else
		return (10);
}

static void	print_max_neg(int fd)
{
	ft_putchar_fd('-', fd);
	ft_putchar_fd('2', fd);
	ft_putchar_fd('1', fd);
	ft_putchar_fd('4', fd);
	ft_putchar_fd('7', fd);
	ft_putchar_fd('4', fd);
	ft_putchar_fd('8', fd);
	ft_putchar_fd('3', fd);
	ft_putchar_fd('6', fd);
	ft_putchar_fd('4', fd);
	ft_putchar_fd('8', fd);
}

void	ft_putnbr_fd(int nb, int fd)
{
	int	digit_count;

	if (nb == 0)
	{
		ft_putchar_fd('0', fd);
	}
	else if (nb == -2147483648)
	{
		print_max_neg(fd);
	}
	else if (nb > 0)
	{
		digit_count = count_digits(nb);
		calculate(nb, digit_count, fd);
	}
	else
	{
		ft_putchar_fd('-', fd);
		digit_count = count_digits(-nb);
		calculate(-nb, digit_count, fd);
	}
}
