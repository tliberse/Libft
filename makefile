# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tliberse <tliberse@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/28 14:12:44 by tliberse          #+#    #+#              #
#    Updated: 2024/10/28 15:28:41 by tliberse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
RM = rm -f

SOURCES =	ft_atoi.c\
		ft_bzero.c\
		ft_calloc.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_itoa.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memset.c\
		ft_putchar_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_putstr_fd.c\
		ft_split.c\
		ft_strchr.c\
		ft_strdup.c\
		ft_striteri.c\
		ft_strjoin.c\
		ft_strlcat.c\
		ft_strlcpy.c\
		ft_strlen.c\
		ft_strmapi.c\
		ft_strncmp.c\
		ft_strnstr.c\
		ft_strrchr.c\
		ft_strtrim.c\
		ft_substr.c\
		ft_tolower.c\
		ft_toupper.c

# BONUS = ft_lstadd_back.c \
# 		ft_lstadd_front.c \
# 		//ft_lstclear.c \
# 		ft_lstdelone.c \
# 		//ft_lstiter.c \
# 		ft_lstlast.c \
# 		//ft_lstmap.c \
# 		ft_lstnew.c \
# 		ft_lstsize.c

OBJETS = $(SOURCES:.c=.o)

BONUS_OBJETS = $(BONUS:.c=.o)

all : $(NAME)

$(NAME):  $(OBJETS)
		ar -rcs $(NAME) $(OBJETS)
		ranlib $(NAME)

clean : 
		$(RM) $(OBJETS) $(BONUS_OBJETS)

fclean : clean
		$(RM) $(NAME) $(OBJETS) $(BONUS_OBJETS)

re : fclean $(NAME)

bonus: $(OBJETS) $(BONUS_OBJETS)
		ar rcs $(NAME) $(OBJETS) $(BONUS_OBJETS)

%.o: %.c 
		 $(CC) -Wall -Wextra -Werror -c $< -o $@

.PHONY: all clean fclean re bonus 