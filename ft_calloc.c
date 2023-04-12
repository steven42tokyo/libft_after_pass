/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthacker <sthacker@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 04:37:46 by sthacker          #+#    #+#             */
/*   Updated: 2023/03/18 12:08:52 by sthacker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_count;
	void	*ptr;

	if (count == 0 || size == 0)
	{
		ptr = malloc(1);
		ft_bzero(ptr, 1);
		return (ptr);
	}
	total_count = count * size;
	if (total_count / count != size)
	{
		return (NULL);
	}
	ptr = malloc(total_count);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, total_count);
	return (ptr);
}
