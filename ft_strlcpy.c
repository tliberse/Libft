/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliberse <tliberse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 19:20:52 by tliberse          #+#    #+#             */
/*   Updated: 2024/11/04 17:34:12 by tliberse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (size == 0)
		return (len);
	while (src[i] && i < (size -1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

// int main(void)
// {
// 	char *src = "hello";
// 	char dst[2];
// 	size_t len = ft_strlcpy(dst, src, 3);
// 	printf ("%s\n%s\nlen = %zu\n", dst, src, len);

// 	char *src1 = "hello";
// 	char dst1[2];
// 	printf ("%s\n%s\nlen = %zu\n", dst1, src1, strlcpy(dst1, src1, 3));

// 	return (0);
// }