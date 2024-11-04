/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliberse <tliberse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:26:49 by tliberse          #+#    #+#             */
/*   Updated: 2024/11/04 18:41:23 by tliberse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	p = malloc((nmemb + 1) * sizeof(void));
	if (p == NULL)
		return (NULL);
	if (nmemb * size > INT_MAX)
		return (NULL);
	ft_bzero(p, nmemb * size);
	return (p);
}

// int main(void)
// {
// 	int *arr = (int *)ft_calloc(3, sizeof(int));
//     if (!arr)
//         return (1);

//     printf("%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);

//     free(arr);
//     return 0;
// }