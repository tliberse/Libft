/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliberse <tliberse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:09:48 by tliberse          #+#    #+#             */
/*   Updated: 2024/11/05 16:31:57 by tliberse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;

	j = 0;
	while (s[j])
		j++;
	i = j;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

// int main(void)
// {
// 	printf ("-%s-\n", strrchr("le code c'est pas evident", '\0'));
// 	printf ("-%s-\n", ft_strrchr("le code c'est pas evident", '\0'));
// 	return (0);
// }