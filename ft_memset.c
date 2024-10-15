/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliberse <tliberse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:00:10 by tliberse          #+#    #+#             */
/*   Updated: 2024/10/15 17:01:42 by tliberse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char )c;
		i++;
	}
	return (s);
}

// int main() 
// {
//     char str[50] = "Hello, World!";
//     printf("Before memset: %s\n", str);
//     memset(str, '*', 5);
//     printf("After memset: %s\n", str);
//     return 0;
// }