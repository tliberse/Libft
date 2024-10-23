/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliberse <tliberse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 13:57:52 by tliberse          #+#    #+#             */
/*   Updated: 2024/10/23 15:51:47 by tliberse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*result;

	result = (char *)s;
	if (c == '\0')
		return ((void *)&result[ft_strlen((char *) s)]);
	while (n > 0)
	{
		if (*result == (char)c)
			return ((void *)result);
		result++;
		n--;
	}
	return (NULL);
}

// int main(void)
// {
// 	const char *str = "Coucou comment tu vas?";

//     printf("-%s-\n", (char *)memchr(str, 'e', 15));
//     printf("-%s-\n", (char *)ft_memchr(str, 'e', 15));
//     return 0;
// }