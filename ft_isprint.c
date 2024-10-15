/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliberse <tliberse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 11:27:44 by tliberse          #+#    #+#             */
/*   Updated: 2024/10/15 15:39:35 by tliberse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(char c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}

// int main(void)
// {
// 	char c1 = '_';
// 	char c2 = '\r';

// 	printf("%d, %d\n", c1, ft_isprint(c1));
// 	printf("%d, %d\n", c2, ft_isprint(c2));
// }
