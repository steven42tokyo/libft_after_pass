/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthacker <sthacker@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 04:54:27 by sthacker          #+#    #+#             */
/*   Updated: 2023/03/21 16:04:09 by sthacker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*set_out(char *out, const char *s, unsigned int start, size_t len)
{
	size_t	i;

	out = malloc(len + 1);
	if (out == NULL)
		return (NULL);
	i = 0;
	while (len-- > 0 && s[start + i] != '\0')
	{
		out[i] = s[start + i];
		i++;
	}
	out[i] = '\0';
	return (out);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*out;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		out = malloc(1);
		if (out == NULL)
			return (NULL);
		*out = '\0';
		return (out);
	}
	if (len > s_len - start)
		len = s_len - start;
	out = "";
	out = set_out(out, s, start, len);
	return (out);
}
