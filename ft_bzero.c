/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliberse <tliberse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:22:41 by tliberse          #+#    #+#             */
/*   Updated: 2024/10/28 15:17:58 by tliberse         ###   ########.fr       */
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

// int	main(void)
// {
// 	char	str[] = "123456789";

// 	printf("Avant ft_bzero: %s\n", str);
// 	ft_bzero(str, 5);
// 	printf("Après ft_bzero: %s\n", str);

// 	return (0);
// }