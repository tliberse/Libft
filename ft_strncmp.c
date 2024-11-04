/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliberse <tliberse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 12:11:04 by tliberse          #+#    #+#             */
/*   Updated: 2024/11/04 17:58:59 by tliberse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && (i < n - 1))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int	main(void)
// {
// 	char	src[] = "bonjour";
// 	char	dest[] = "bonjo";
// 	printf ("ascii = %d\n", ft_strncmp(src, dest, 10));

// 	char	src1[] = "bonjour";
// 	char	dest1[] = "bonjo";
// 	printf ("ascii = %d\n", strncmp(src1, dest1, 10));
// 	return (0);
// }
