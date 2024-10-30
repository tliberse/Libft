/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliberse <tliberse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:08:48 by tliberse          #+#    #+#             */
/*   Updated: 2024/10/30 15:55:33 by tliberse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(const char *phrase, char c)
{
	int	i;
	int	wcount;

	i = 0;
	wcount = 0;
	while (phrase[i] && (phrase[i] == c))
	{
		i++;
	}
	while (phrase[i])
	{
		while (phrase[i] && (phrase[i] != c))
		{
			i++;
		}
		wcount++;
		while (phrase[i] && (phrase[i] == c))
		{
			i++;
		}
	}
	return (wcount);
}

static char	*ft_strncpyy(char *dest, const char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

static void	ft_split2(const char *s, char c, char **gtab)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (start < i)
		{
			gtab[j] = malloc (sizeof (char) * ((i - start) + 1));
			ft_strncpyy (gtab[j++], &s[start], (i - start));
		}
	}
	gtab[j] = NULL;
}

char	**ft_split(const char *s, char c)
{
	int		wcount;
	char	**gtab;

	wcount = ft_count (s, c);
	gtab = malloc (sizeof(char *) * (wcount + 1));
	if (gtab == NULL)
		return (NULL);
	ft_split2(s, c, gtab);
	return (gtab);
}

// int main(void)
// {
// 	int  i = 0;
// 	char const *str = "   j'ai | pas | faim";
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
// 	//printf ("%d", ft_count(str));
// }