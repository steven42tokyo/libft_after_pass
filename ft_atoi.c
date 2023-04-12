/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthacker <sthacker@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 10:51:22 by sthacker          #+#    #+#             */
/*   Updated: 2023/03/21 14:55:20 by sthacker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static unsigned char	ft_charmap(char c)
{
	char	chr;

	chr = ft_toupper(c);
	if (chr >= '0' && chr <= '9')
		return (chr - '0');
	if (chr >= 'A' && chr <= 'Z')
		return (chr - 'A' + 10);
	return (127);
}

static int	ft_getbase(const char **nptr, int base)
{
	const char	*ptr;

	ptr = *nptr;
	if ((base == 0 || base == 16) && *ptr == '0')
	{
		if (*(++ptr) == 'x' && (++(ptr)))
			base = 16;
		else if (*ptr == '0')
			base = 8;
		else
			base = 10;
		*nptr = ptr;
	}
	return (base);
}

long long	logic(int neg, long long result, int digit, int base)
{
	if (result > LLONG_MAX / base)
	{
		if (neg)
			return (-LLONG_MAX - 1);
		else
			return (LLONG_MAX);
	}
	if (result == LLONG_MAX / base && digit > LLONG_MAX % base)
	{
		if (neg)
			return (-LLONG_MAX - 1);
		else
			return (LLONG_MAX);
	}
	result = result * base + digit;
	return (result);
}

long long	fake_strtol(const char *nptr, int base)
{
	int			neg;
	long long	result;
	int			digit;

	if (base < 0 || base > 36)
		return (0);
	result = 0;
	while ((9 <= *nptr && *nptr <= 13) || *nptr == ' ')
		nptr++;
	neg = 0;
	if (*nptr == '-')
		neg = 1;
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	base = ft_getbase(&nptr, base);
	while (ft_charmap(*nptr) < base)
	{
		digit = ft_charmap(*nptr++);
		result = logic(neg, result, digit, base);
	}
	if (neg)
		result = -result;
	return (result);
}

int	ft_atoi(const char *str)
{
	return ((int)fake_strtol(str, 10));
}
