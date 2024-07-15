# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/17 14:38:34 by mohimi            #+#    #+#              #
#    Updated: 2024/05/22 17:26:13 by mohimi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

FLAGS = -Wall -Wextra -Werror

NAME = push_swap

NAME_BONUS = checker

SRCS = ./mandatory/ft_split.c \
		./mandatory/creat_list.c \
		./mandatory/main.c \
		./mandatory/utils.c \
		./mandatory/parcing.c \
		./mandatory/bush_a_b.c \
		./mandatory/moves_a.c \
		./mandatory/moves_b.c \
		./mandatory/ft_sort_4_5.c \
		./mandatory/ft_sort2_3.c \
		./mandatory/push_swap.c \

OBJS = $(SRCS:.c=.o)

BONUS = ./bonus/ft_split_bonus.c \
		./bonus/creat_list_bonus.c \
		./bonus/main_bonus.c \
		./bonus/utils_bonus.c \
		./bonus/parcing_bonus.c \
		./bonus/bush_a_b_bonus.c \
		./bonus/moves_a_bonus.c \
		./bonus/moves_b_bonus.c \
		./bonus/push_swap_bonus.c \
		./bonus/get_next_line_bonus.c \
		./bonus/get_next_line_utils_bonus.c \
		./bonus/save.c \

OBJB = $(BONUS:.c=.o)

GREEN = \033[0;32m
RESET = \033[0m

all: $(NAME)

bonus : $(NAME_BONUS)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)$(NAME) created$(RESET)"

$(NAME_BONUS) : $(OBJB)
	$(CC) $(FLAGS) $(OBJB) -o $(NAME_BONUS)
	@echo "$(GREEN)$(NAME_BONUS) created$(RESET)"

mandatory/%.o: mandatory/%.c mandatory/push_swap.h
	$(CC) $(FLAGS) -c $< -o $@

bonus/%.o: bonus/%.c bonus/checker.h
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(OBJB)
	@echo "$(GREEN)$(NAME)$(NAME_BONUS) objects cleaned$(RESET)"

re: fclean all

fclean: clean

	rm -f $(NAME) $(NAME_BONUS)
	@echo "$(GREEN)$(NAME)$(NAME_BONUS) fcleaned$(RESET)"

.PHONY: clean