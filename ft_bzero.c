/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliberse <tliberse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:22:41 by tliberse          #+#    #+#             */
/*   Updated: 2024/10/16 14:52:09 by tliberse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = '\0';
		i++;
	}
}

// int main() 
// {
//     char s[] = "Hello, World!";
//     printf("Before bzero: %s\n", s);
//     ft_bzero(s, 5);
//     printf("After bzero: %s\n", s);
//     return 0;
// }