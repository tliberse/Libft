/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliberse <tliberse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 13:57:52 by tliberse          #+#    #+#             */
/*   Updated: 2024/11/05 14:55:33 by tliberse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*result;

	result = (unsigned char *)s;
	while (n > 0)
	{
		if (*result == (unsigned char)c)
			return ((void *)result);
		result++;
		n--;
	}
	if (c == '\0' && n > 0)
		return ((void *)&result[ft_strlen((char *) s)]);
	return (NULL);
}

// int main(void)
// {
// 		const char *s = "bonjour";

// 		printf("-%s-\n", (char *)memchr(s, 0, 70));
//     	printf("-%s-\n", (char *)ft_memchr(s, 0, 70));
//     	return 0;
// }