/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliberse <tliberse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:59:44 by tliberse          #+#    #+#             */
/*   Updated: 2024/10/23 16:34:34 by tliberse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*result;
	int		i;

	result = (char *)s;
	i = 0;
	if (c == '\0')
		return (&result[ft_strlen((char *) s)]);
	while (result[i])
	{
		if (result[i] == (char)c)
			return (&result[i]);
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	const char *str = "Coucou comment tu vas?";
//     printf("-%s-\n", strchr(str, '\0'));
//     printf("-%s-\n", ft_strchr(str, '\0'));
//     return 0;
// }