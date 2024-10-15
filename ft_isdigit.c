/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliberse <tliberse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 11:00:47 by tliberse          #+#    #+#             */
/*   Updated: 2024/10/14 12:07:50 by tliberse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

// #include <stdio.h>

// int main(void)
// {
// 	int c1 = 'i';
// 	int c2 = '2';

// 	printf("%d, %d\n", c1, ft_isdigit(c1));
// 	printf("%d, %d\n", c2, ft_isdigit(c2));
// }