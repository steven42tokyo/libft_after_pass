/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthacker <sthacker@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 11:28:11 by sthacker          #+#    #+#             */
/*   Updated: 2023/03/23 11:28:13 by sthacker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*s_cpy;
	int		len;

	if (*s == '\0' && c == '\0')
		return ((char *)s);
	s_cpy = (char *)s;
	len = ft_strlen(s);
	if (len == 0)
		return (NULL);
	while (*s_cpy)
	{
		if (*s_cpy == (char)c)
			return (s_cpy);
		s_cpy++;
	}
	if (c == '\0')
		return (s_cpy);
	return (NULL);
}
