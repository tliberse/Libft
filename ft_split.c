/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliberse <tliberse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:08:48 by tliberse          #+#    #+#             */
/*   Updated: 2024/11/05 16:24:15 by tliberse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wcount(const char *str, char c)
{
	size_t	i;
	size_t	wcount;

	i = 0;
	wcount = 0;
	while (str[i] && str[i] == c)
	{
		i++;
	}
	while (str[i])
	{
		while (str[i] && (str[i] != c))
		{
			i++;
		}
		wcount++;
		while (str[i] && (str[i] == c))
		{
			i++;
		}
	}
	return (wcount);
}

static char	*ft_nextword(char const **s, char c)
{
	char	*word;
	size_t	len;

	while (**s == c)
	{
		(*s)++;
	}
	len = 0;
	while ((*s)[len] && (*s)[len] != c)
	{
		len++;
	}
	word = ft_substr(*s, 0, len);
	if (word == NULL)
		return (NULL);
	(*s) += len;
	return (word);
}

static void	ft_freesplit(char **str, int i)
{
	while (i-- > 0)
		free(str[i]);
	free(str);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	wcount;
	size_t	i;

	if (s == 0)
		return (NULL);
	wcount = ft_wcount(s, c);
	split = (char **)ft_calloc(wcount + 1, sizeof(char *));
	if (split == NULL)
		return (NULL);
	i = 0;
	while (i < wcount)
	{
		split[i] = ft_nextword(&s, c);
		if (split[i] == NULL)
		{
			ft_freesplit(split, i);
			return (NULL);
		}
		i++;
	}
	return (split);
}

// int main(void)
// {
// 	int  i = 0;
// 	char const *str = " ||  j'ai | pas | faim";
// 	char **gtab = ft_split(str, '|');
// 	while(gtab[i])
// 	{	
// 		printf("%s\n", gtab[i]);
// 		i++;
// 	}
// 	i = 0;
// 	while(gtab[i])
// 	{
// 		free(gtab[i]);
// 		i++;
// 	}
// 	free (gtab);
// }