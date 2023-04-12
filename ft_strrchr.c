/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthacker <sthacker@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 11:28:57 by sthacker          #+#    #+#             */
/*   Updated: 2023/03/23 11:28:58 by sthacker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		len;
	const char	*p;

	len = ft_strlen(s);
	p = s + len;
	if (c == '\0')
		return ((char *)p);
	while (p-- > s)
	{
		if (*p == (char)c)
			return ((char *)p);
	}
	return (NULL);
}
