/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliberse <tliberse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:12:08 by tliberse          #+#    #+#             */
/*   Updated: 2024/11/04 16:54:02 by tliberse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if ((char *)dest == NULL && (const char *)src == NULL)
		return (NULL);
	if ((const char *)src > (char *)dest)
	{
		while (i < n)
		{
			((char *)dest)[i] = ((const char *)src)[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			((char *)dest)[n - 1] = ((const char *)src)[n - 1];
			n--;
		}
	}
	return (dest);
}

// int main(void) 
// {
//     char src[] = "Hello, World!";
// 	char dest[] = "111111111111";
//     printf("Before memmove: %s\n", src);
// 	ft_memmove((void *)dest, (void *)src, 7);
//     printf("After memmove: %s\n", dest);
//     return 0;
// }