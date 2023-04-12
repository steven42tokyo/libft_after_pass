/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthacker <sthacker@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 10:08:14 by sthacker          #+#    #+#             */
/*   Updated: 2023/03/07 21:25:05 by sthacker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	strlen;

	strlen = ft_strlen(src);
	if (size == 0)
		return (strlen);
	while (--size > 0 && *src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (strlen);
}
