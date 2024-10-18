/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliberse <tliberse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:27:32 by tliberse          #+#    #+#             */
/*   Updated: 2024/10/18 14:55:15 by tliberse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
		n--;
	}
	return (0);
}

// int main(void)
// {
//     const char str1[] = "abcdef";
//     const char str2[] = "abcdeg";
//     size_t n = 6;
//     int result;

//     result = ft_memcmp(str1, str2, n);

//     if (result == 0)
//         printf("Les %zu premiers octets sont identiques.\n", n);
//     else if (result > 0)
//         printf("str1 est plus grande que str2 (différence: %d).\n", result);
//     else
//         printf("str1 est plus petite que str2 (différence: %d).\n", result);

//     return 0;
// }