/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthacker <sthacker@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:08:48 by sthacker          #+#    #+#             */
/*   Updated: 2023/04/12 20:03:39 by sthacker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	*allocate_pos(char *result, int n)
{
	int	num_digits;
	int	temp;

	num_digits = 0;
	temp = n;
	while (temp > 0)
	{
		num_digits++;
		temp /= 10;
	}
	result = (char *)malloc((num_digits + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[num_digits--] = '\0';
	while (n > 0)
	{
		result[num_digits--] = (n % 10) + '0';
		n /= 10;
	}
	return (result);
}

static char	*allocate_neg(char *result, int n)
{
	int	num_digits;
	int	temp;

	num_digits = 0;
	temp = n;
	while (temp > 0)
	{
		num_digits++;
		temp /= 10;
	}
	result = (char *)malloc((num_digits + 2) * sizeof(char));
	if (!result)
		return (NULL);
	result[0] = '-';
	num_digits++;
	result[num_digits--] = '\0';
	while (n > 0)
	{
		result[num_digits--] = (n % 10) + '0';
		n /= 10;
	}
	return (result);
}

static char	*basic_checks(int n, char *result)
{
	if (n == 0)
		result = ft_strdup("0");
	else if (n == -2147483648)
		result = ft_strdup("-2147483648");
	return (result);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		sign;

	result = NULL;
	sign = 1;
	result = basic_checks(n, result);
	if (result != NULL)
		return (result);
	if (n < 0)
	{
		sign = -1;
		n = -n;
		result = allocate_neg(result, n);
	}
	else
		result = allocate_pos(result, n);
	return (result);
}
