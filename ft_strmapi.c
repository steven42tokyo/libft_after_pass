/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthacker <sthacker@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 04:55:41 by sthacker          #+#    #+#             */
/*   Updated: 2023/03/18 13:57:26 by sthacker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*mapped;
	size_t	len;
	size_t	i;

	if (!s || !f)
		return (NULL);
	len = 0;
	while (s[len])
		len++;
	mapped = (char *)malloc(len + 1);
	if (!mapped)
		return (NULL);
	i = 0;
	while (i < len)
	{
		mapped[i] = f(i, s[i]);
		i++;
	}
	mapped[len] = '\0';
	return (mapped);
}
