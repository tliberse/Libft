/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliberse <tliberse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 13:57:52 by tliberse          #+#    #+#             */
/*   Updated: 2024/11/04 18:33:13 by tliberse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*result;

	result = (unsigned char *)s;
	if (c == '\0')
		return ((void *)&result[ft_strlen((char *) s)]);
	while (n > 0)
	{
		if (*result == (unsigned char)c)
			return ((void *)result);
		result++;
		n--;
	}
	return (NULL);
}

// int main(void)
// {
// 	const char *str = "bonjour";

//     printf("-%s-\n", (char *)memchr(str, 'j', 7));
//     printf("-%s-\n", (char *)ft_memchr(str, 'j', 7));
//     return 0;
// }