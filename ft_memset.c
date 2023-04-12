/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthacker <sthacker@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 11:27:21 by sthacker          #+#    #+#             */
/*   Updated: 2023/03/23 11:27:24 by sthacker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int val, size_t n)
{
	unsigned char	*c;

	c = (unsigned char *)s;
	while (n--)
	{
		c[n] = val;
	}
	return (s);
}
