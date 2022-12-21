# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/02 10:02:09 by msarigul          #+#    #+#              #
#    Updated: 2022/12/21 21:41:23 by msarigul         ###   ########.tr        #
#                                                                              #
# **************************************************************************** #

NAME		:= pipex.a 

OBJDIR		:= objects
LIBFT		:= $(OBJDIR)/libft.a
FT_PRINTF	:= $(OBJDIR)/ft_printf.a
GNL			:= $(OBJEDIR)/get_next_line.a
SRC			:= $(OBJEDIR)/src.a
BONUS		:= $(OBJEDIR)/bonus.a
CC			:= cc
CFLAGS		:= -Wall -Wextra -Werror -I ./include

$(NAME): $(OBJDIR) $(LIBFT) $(FT_PRINTF) $(GNL) $(SRC)
	@ar -rcs $(NAME) $(OBJDIR)/*.o 
	@gcc ./pipex.c pipex.a -I ./include -o pipex

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

bonus : $(OBJDIR) $(LIBFT) $(FT_PRINTF) $(GNL) 
	@ar -rcs $(NAME) $(OBJDIR)/*.o 
	@gcc ./src/bonus/pipex_bonus.c pipex_bonus.a -I ./include -o pipex_bonus

clean:
	@rm -f $(OBJDIR)/*.o

fclean: clean
	@rm -f $(NAME)
	@rm -rf $(OBJDIR)
	@rm -rf pipex

re: fclean all

m : 
	@gcc pipex.c pipex.a -I ./include -o pipex
	@./pipex
	@rm pipex

.PHONY: all re clean fclean m
