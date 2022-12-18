# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/02 10:02:09 by msarigul          #+#    #+#              #
#    Updated: 2022/12/18 20:42:38 by msarigul         ###   ########.tr        #
#                                                                              #
# **************************************************************************** #

NAME		:= pipex.a 

OBJDIR		:= objects
LIBFT		:= $(OBJDIR)/libft.a
FT_PRINTF	:= $(OBJDIR)/ft_printf.a
GNL			:= $(OBJEDIR)/get_next_line.a
SRC			:= $(OBJEDIR)/src.a
CC		:= cc
CFLAGS	:= -Wall -Wextra -Werror -I ./include

$(NAME): $(OBJDIR) $(LIBFT) $(FT_PRINTF) $(GNL) $(SRC)
	@ar -rcs $(NAME) $(OBJDIR)/*.o 
	@gcc pipex.c pipex.a -I ./include -o pipex

$(OBJDIR):
	@mkdir -p $(OBJDIR)

$(LIBFT):
	@echo "LIBFT"
	@make -C libft

$(FT_PRINTF):
	@echo "FT_PRINTF"
	@make -C ft_printf

$(GNL):
	@echo "GET_NEXT_LINE"
	@make -C get_next_line


$(SRC):
	@echo "SOURCE"
	@make -C src

all: $(NAME)

checker : $(OBJDIR) $(LIBFT) $(FT_PRINTF) $(GNL) $(ARG) $(SORT) $(ROTATE) $(UTILS) $(QUICK) 
	@ar -rcs $(NAME) $(OBJDIR)/*.o 
	@gcc ./src/checker.c push_swap.a -I ./include -o checker


clean:
	@rm -f $(OBJDIR)/*.o

fclean: clean
	@rm -f $(NAME)
	@rm -rf $(OBJDIR)

re: fclean all

v:
	@pip3 install push_swap_gui
	@python3 -m push_swap_gui

.PHONY: all re clean fclean m
