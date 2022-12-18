# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/02 10:09:01 by msarigul          #+#    #+#              #
#    Updated: 2022/12/16 17:38:38 by msarigul         ###   ########.tr        #
#                                                                              #
# **************************************************************************** #

OBJDIR	:= ../objects
NAME	:= $(OBJDIR)/libft.a
CFLAGS	:= -Wall -Wextra -Werror -I ../include -c
FILES	:= ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memcpy.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_strlen.c \
		ft_bzero.c \
		ft_strdup.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_memmove.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c\
		ft_strcmp.c\

OBJ		:= $(FILES:%.c=$(OBJDIR)/%.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar -rcs $(NAME) $(OBJ)

$(OBJDIR)/%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJDIR)/ft_*.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
