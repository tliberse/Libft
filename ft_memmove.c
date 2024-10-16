/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliberse <tliberse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:12:08 by tliberse          #+#    #+#             */
/*   Updated: 2024/10/16 16:04:40 by tliberse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (src > dest)
	{
		while (n > 0)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			n--;
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}

// int main(void) 
// {
//     char src[] = "Hello, World!";
// 	char dest[] = "111111111";
//     printf("Before memmove: %s\n", src);
// 	ft_memmove((void *)dest, (void *)src, 5);
//     printf("After memmove: %s\n", dest);
//     return 0;
// }