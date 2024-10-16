/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliberse <tliberse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:12:55 by tliberse          #+#    #+#             */
/*   Updated: 2024/10/16 16:55:28 by tliberse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

int				ft_isalpha(char c);
int				ft_isdigit(int c);
int				ft_isalnum(char c);
int				ft_isascii(char c);
int				ft_isprint(char c);
int				ft_strlen(char *str);
char			*ft_toupper(char *str);
char			*ft_tolower(char *str);
void			*ft_memset(void *s, int c, size_t n);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

#endif