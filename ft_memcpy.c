/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthacker <sthacker@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 11:27:12 by sthacker          #+#    #+#             */
/*   Updated: 2023/03/23 11:27:13 by sthacker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	if (!src && !dst)
		return (NULL);
	d = (char *) dst;
	s = (char *) src;
	i = -1;
	while (++i < n)
	{
		*d = *s;
		d++;
		s++;
	}
	return (dst);
}
