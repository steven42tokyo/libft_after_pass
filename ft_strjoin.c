/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthacker <sthacker@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:48:27 by sthacker          #+#    #+#             */
/*   Updated: 2023/03/21 14:04:15 by sthacker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		total_length;
	char	*out;
	int		len_s1;
	int		len_s2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len_s1 = ft_strlen((char *) s1);
	len_s2 = ft_strlen((char *) s2);
	total_length = len_s1 + len_s2;
	out = malloc(total_length + 1);
	if (!out)
		return (NULL);
	ft_strlcpy(out, (char *) s1, len_s1 + 1);
	ft_strlcpy(out + len_s1, (char *) s2, len_s2 + 1);
	return (out);
}
