/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliberse <tliberse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:09:48 by tliberse          #+#    #+#             */
/*   Updated: 2024/10/23 16:34:16 by tliberse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*lastoc;
	int		i;

	lastoc = NULL;
	i = 0;
	if (c == '\0')
		return ((char *)&s[ft_strlen((char *)s)]);
	while (s[i])
	{
		if (s[i] == (char)c)
			lastoc = (char *)&s[i];
		i++;
	}
	return (lastoc);
}

// int main(void)
// {
// 	printf ("-%s-\n", strrchr("le code c'est pas evident", '\0'));
// 	printf ("-%s-\n", ft_strrchr("le code c'est pas evident", '\0'));
// 	return (0);
// }