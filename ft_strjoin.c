/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliberse <tliberse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 12:20:44 by tliberse          #+#    #+#             */
/*   Updated: 2024/08/27 15:22:29 by tliberse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

void	ft_strjoin2(char *result, int size, char *sep, char **strs)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (i < size)
	{
		k = 0;
		while (strs[i][k])
			result[j++] = strs[i][k++];
		if (i < size - 1)
		{
			k = 0;
			while (sep[k])
				result[j++] = sep[k++];
		}
		i++;
	}
	result[j] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		sep_len;
	int		total_len;
	char	*result;

	sep_len = ft_strlen(sep);
	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		if (i < size - 1)
			total_len += sep_len;
		i++;
	}
	result = malloc((total_len + 1) * sizeof(char));
	if (result == 0)
		return (NULL);
	ft_strjoin2(result, size, sep, strs);
	return (result);
}

// int main(void)
// {
// 	char *strs[3];
// 	strs[0] = "c'est de";
// 	strs[1] = "la merde";
// 	strs[2] = "strjoin";
// 	char *sep = " ";
// 	char *result = ft_strjoin(3, strs, sep);
// 	printf("%s\n", result);
// 	free(result);
// 	return (0);
// }