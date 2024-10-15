/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliberse <tliberse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 15:37:11 by tliberse          #+#    #+#             */
/*   Updated: 2024/10/15 14:01:31 by tliberse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char *str)
{
	while (*str)
	{
		if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
			return (0);
		str++;
	}
	return (1);
}

// #include <stdio.h>

// int main(void)
// {
// 	char str1[] = "Bonjour";
// 	char str2[] = "B0nj0ur";

// 	printf("%s, %d\n", str1, ft_isalpha(str1));
// 	printf("%s, %d\n", str2, ft_isalpha(str2));
// }