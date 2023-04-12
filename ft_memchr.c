/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthacker <sthacker@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 11:26:01 by sthacker          #+#    #+#             */
/*   Updated: 2023/03/23 11:26:04 by sthacker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*out;

	out = (unsigned char *) s;
	while (n--)
	{
		if (*out == (unsigned char) c)
			return (out);
		out++;
	}
	return (NULL);
}
