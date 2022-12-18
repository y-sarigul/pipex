# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/02 10:09:01 by msarigul          #+#    #+#              #
#    Updated: 2022/12/18 20:41:36 by msarigul         ###   ########.tr        #
#                                                                              #
# **************************************************************************** #

OBJDIR	:= ../objects
NAME	:= $(OBJDIR)/libft.a
CFLAGS	:= -Wall -Wextra -Werror -I ../include -c
FILES	:= ft_error.c\

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
