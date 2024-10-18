/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliberse <tliberse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:59:44 by tliberse          #+#    #+#             */
/*   Updated: 2024/10/18 15:42:47 by tliberse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strchr(const char *s, int c)
{
	unsigned char	*result;
	int i;

	result = (unsigned char *)s;
	i = 0;
	if (c == '\0')
		return ((void *)&result[ft_strlen((char *) s)]);
	while (result[i])
	{
		if (*result == (unsigned char)c)
			return (result);
		i++;
	}
	return (NULL);
}