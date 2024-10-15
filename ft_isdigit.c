/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliberse <tliberse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 11:00:47 by tliberse          #+#    #+#             */
/*   Updated: 2024/10/15 15:34:55 by tliberse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

// int main(void)
// {
// 	int c1 = 'i';
// 	int c2 = '2';

// 	printf("%d, %d\n", c1, ft_isdigit(c1));
// 	printf("%d, %d\n", c2, ft_isdigit(c2));
// }