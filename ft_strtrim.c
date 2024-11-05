/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliberse <tliberse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:43:16 by tliberse          #+#    #+#             */
/*   Updated: 2024/11/05 15:36:34 by tliberse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	int		start;
	int		end;
	char	*trim_str;

	if (s1 == 0 || set == 0)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	trim_str = ft_substr(s1, start, end - start);
	return (trim_str);
}

// int		main()
// {
// 	char str[] = "4salut4 je 4m'appelle 4";
// 	char set[] = "4";
// 	printf("%s\n", ft_strtrim(str, set));
// 	return (0);
// }