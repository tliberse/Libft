/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliberse <tliberse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:26:35 by tliberse          #+#    #+#             */
/*   Updated: 2024/11/05 15:20:47 by tliberse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*result;

	i = 0;
	j = 0;
	if (little[j] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		if (big[i] == little[0])
		{
			result = (char *)(big + i);
			while (big[i + j] == little[j] && i + j < len)
			{
				if (little[j + 1] == '\0')
					return (result);
				j++;
			}
			result = 0;
		}
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	char *big = "j'ai envie de partir";
// 	char *little = "envie";
// 	printf ("%s\n", ft_strnstr(big, little, 10));
// 	printf ("%s\n", strnstr(big, little, 10));
// }