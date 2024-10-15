/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliberse <tliberse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 12:11:04 by tliberse          #+#    #+#             */
/*   Updated: 2024/08/14 16:14:06 by tliberse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	src[] = "bo";
// 	char	dest[] = "bon";

// 	printf ("%d\n", ft_strncmp(src, dest, 10));
// 	printf ("%d\n", strncmp(src, dest, 10));
// 	return (0);
// }
