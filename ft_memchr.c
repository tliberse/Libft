/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliberse <tliberse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 13:57:52 by tliberse          #+#    #+#             */
/*   Updated: 2024/10/18 15:38:18 by tliberse         ###   ########.fr       */
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
//     const char s[] = "Hello, world!";
//     char c = '\0';
//     char *result;

//     result = ft_memchr(s, c, strlen(s));

//     if (result != NULL)
//         printf("Char '%c' à la position: %ld\n", c, result - s);
//     else
//         printf("Char '%c' non trouvé.\n", c);

//     return 0;
// }