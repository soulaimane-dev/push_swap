# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbouabid <sbouabid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/26 11:48:27 by sbouabid          #+#    #+#              #
#    Updated: 2023/12/26 12:08:26 by sbouabid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

HEADER = ./SRC/push_swap.h
HEADER_BONUS = ./BONUS/push_swap_bonus.h
HEADER_GTN	= ./GTN/get_next_line.h
SRCF = 	./SRC/ft_a.c\
		./SRC/ft_ab.c\
		./SRC/ft_algo.c\
		./SRC/ft_atoi.c\
		./SRC/ft_b.c\
		./SRC/ft_handler.c\
		./SRC/ft_main_stack.c\
		./SRC/ft_sort3.c\
		./SRC/ft_split.c\
		./SRC/ft_stack.c\
		./SRC/index.c\
		./SRC/main.c
SRCF_BONUS =	./BONUS/ft_a.c\
				./BONUS/ft_ab.c\
				./BONUS/ft_atoi.c\
				./BONUS/ft_b.c\
				./BONUS/ft_handler.c\
				./BONUS/ft_main_stack.c\
				./BONUS/ft_split.c\
				./BONUS/ft_stack.c\
				./BONUS/main.c
SRCF_GTN =		./GTN/get_next_line.c\
				./GTN/get_next_line_utils.c
OBJF = $(SRCF:.c=.o)
OBJF_BONUS = $(SRCF_BONUS:.c=.o)
OBJF_GTN = $(SRCF_GTN:.c=.o)

NAME = push_swap
NAME_BONUS = checker

all : $(NAME)

$(NAME) : $(OBJF)
	$(CC) $(CFLAGS) $(OBJF) -o $(NAME)

bonus :$(NAME_BONUS)

$(NAME_BONUS) : $(OBJF_BONUS) $(OBJF_GTN)
	$(CC) $(CFLAGS) $(OBJF_BONUS) $(OBJF_GTN) -o $(NAME_BONUS)

$(OBJF): %.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@
$(OBJF_BONUS): %.o: %.c $(HEADER_BONUS) $(HEADER_GTN)
	$(CC) $(CFLAGS) -c $< -o $@
clean :
	$(RM) $(OBJF) $(OBJF_BONUS) $(OBJF_GTN)

fclean : clean
	$(RM) $(NAME) $(NAME_BONUS)

re : fclean all