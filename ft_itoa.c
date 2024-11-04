/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliberse <tliberse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:44:00 by tliberse          #+#    #+#             */
/*   Updated: 2024/11/04 18:51:56 by tliberse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countlen(long nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
		len++;
	while (nb != 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*s;
	long	nb;

	nb = n;
	len = ft_countlen(n);
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	if (n < 0)
	{
		s[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		s[0] = '0';
	s[len] = '\0';
	while (nb > 0)
	{
		s[--len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (s);
}

// int	main(void)
// {
// 	printf("%s\n", ft_itoa(-2147483648));
// 	return (0);
// }