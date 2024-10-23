/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliberse <tliberse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 14:05:52 by tliberse          #+#    #+#             */
/*   Updated: 2024/10/23 16:24:16 by tliberse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	char	*p;

	i = 0;
	while (src[i])
	{
		i++;
	}
	p = malloc((i + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

// int main(void)
// {
// 	char *str;
// 	char p[50] = "abcdefgh";
// 	str = ft_strdup(p);
// 	printf("%s", str);
// 	free(str);
// 	return (0);
// }