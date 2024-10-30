/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliberse <tliberse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:43:16 by tliberse          #+#    #+#             */
/*   Updated: 2024/10/30 16:56:32 by tliberse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	int		len;
	int		start;
	int		end;
	char	*str;

	len = ft_strlen((char *)s1);
	if (len == 0)
		return (ft_strdup(""));
	start = 0;
	end = len - 1;
	while (ft_strchr(set, s1[start]) && start <= end)
		start++;
	while (ft_strchr(set, s1[end]) && end >= start)
		end--;
	str = malloc(sizeof(char) * (end - start + 1));
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, s1 + start, end - start + 1);
	str[end - start + 1] = '\0';
	return (str);
}

// int		main()
// {
// 	char str[] = "4salut4 je 4m'appelle 4";
// 	char set[] = "4";
// 	printf("%s\n", ft_strtrim(str, set));
// 	return (0);
// }