# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: triou <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/18 08:57:44 by triou             #+#    #+#              #
#    Updated: 2018/06/30 21:43:31 by abiestro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = checker
SDIR = srcs
IDIR = includes
ODIR = objs
LDIR = libft
LIB = ft
SRCS =	checker.c \
		ft_atoi.c \
		ft_puterr.c \
		ft_create_elem.c \
		ft_dosort.c \
		ft_getargs.c \
		ft_isnumber.c \
		ft_issort.c \
		ft_lstadd.c \
		ft_lstdel.c \
		ft_lstprint.c \
		ft_lstpush.c \
		ft_lstrot.c \
		ft_lstrotrev.c \
		ft_lstswap.c \
		ft_readparams.c \
		ft_readstdn.c \
		get_next_line.c \
		instructs.c \
		instructs2.c \
		instructs3.c \
		ft_checkdb.c \
		algo_fast_sort.c \
		ft_bubble_sort.c \
		quick_sort.c \
		ft_get_nbr_elements.c \
		ft_find_short_pass_bubble_sort.c \
		range_utils.c \

_INCLUDES = checker.h \
			push_swap_ab.h
INClUDES = $(patsubst %, $(IDIR)/%, $(_INCLUDES))
_OBJ = $(SRCS:.c=.o)
OBJ = $(patsubst %, $(ODIR)/%, $(_OBJ))

all : $(NAME)

$(NAME) : $(OBJ)
	@$(MAKE) -C $(LDIR)
	@$(CC) $(CFLAGS) -o $@ $^ -L$(LDIR) -l$(LIB)
	@echo "\033[1;34mChecker \033[1;35mhas been created \033[1;5;32msuccessfully.\033[0m"

$(ODIR)/%.o : $(SDIR)/%.c $(INCLUDES)
	@$(CC) $(CFLAGS) -o $@ -c $< -I$(IDIR) -I$(LDIR)

clean :
	@$(MAKE) -C $(LDIR) clean
	@rm -f $(OBJ)

fclean : clean
	@$(MAKE) -C $(LDIR) fclean
	@rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
