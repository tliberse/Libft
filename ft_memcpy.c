/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliberse <tliberse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:47:17 by tliberse          #+#    #+#             */
/*   Updated: 2024/11/04 16:38:41 by tliberse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if ((char *)dest == NULL && (char *)src == NULL)
		return (NULL);
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}

// int main(void) 
// {
//     char src[] = "Hello, World!";
// 	char dest[] = "111111111";
//     printf("Before memcpy: %s\n", src);
// 	ft_memcpy((void *)dest, (void *)src, 5);
//     printf("After memcpy: %s\n", dest);
//     return 0;
// }