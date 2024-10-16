/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliberse <tliberse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:00:10 by tliberse          #+#    #+#             */
/*   Updated: 2024/10/16 14:40:49 by tliberse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
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
//     char s[] = "Hello, World!";
//     printf("Before memset: %s\n", s);
//     ft_memset(s, '*', 5);
//     printf("After memset: %s\n", s);
//     return 0;
// }