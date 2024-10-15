/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliberse <tliberse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 11:27:44 by tliberse          #+#    #+#             */
/*   Updated: 2024/10/15 14:02:00 by tliberse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(char *str)
{
	while (*str)
	{
		if (!(*str > 31 && *str < 127))
			return (0);
		str++;
	}
	return (1);
}

// #include <stdio.h>

// int main(void)
// {
// 	char str1[] = "Jai_faim";
// 	char str2[] = "   \r \n";

// 	printf("%s, %d\n", str1, ft_isprint(str1));
// 	printf("%s, %d\n", str2, ft_isprint(str2));
// }
