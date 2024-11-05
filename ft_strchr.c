/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliberse <tliberse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:59:44 by tliberse          #+#    #+#             */
/*   Updated: 2024/11/05 16:28:29 by tliberse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	ya;

	ya = (char)c;
	i = 0;
	while (*s)
	{
		if (*s == ya)
			return ((char *)s);
		s++;
	}
	if (*s == ya)
		return ((char *)s);
	return (0);
}

// int main(void)
// {
// 	const char *str = "Coucou comment tu vas?";
//     printf("-%s-\n", strchr(str, '\0'));
//     printf("-%s-\n", ft_strchr(str, '\0'));
//     return 0;
// }