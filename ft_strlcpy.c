/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliberse <tliberse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 19:20:52 by tliberse          #+#    #+#             */
/*   Updated: 2024/10/18 13:54:32 by tliberse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	if (size == 0)
		return (len);
	while (src[len])
	{
		len++;
	}
	while (src[i] && i < (size -1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

// int main(void)
// {
// 	char *src = "j'aimerai bien partir";
// 	char dest[100];
// 	unsigned int len = ft_strlcpy(dest, src, 30);
// 	printf ("%s\n%s\n%u\n", dest, src, len);
// 	return (0);
// }