# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/02 16:54:17 by abechcha          #+#    #+#              #
#    Updated: 2024/01/13 13:58:35 by abechcha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

NAME_B = checker

CC = cc

CFLAGS = -Wall -Wextra -Werror

HEADER = push_swap.h
B_file = push_swap_bonus

SRC = 	ft_find_node.c\
		ft_big_sort.c\
		ft_final_sort.c\
		ft_set_target.c\
		forward.c\
		ft_check_best_move.c\
		ft_last.c\
		ft_push_flag.c\
		ft_find_node_flag.c\
		ft_setflag.c\
		ft_lstadd_front.c\
		ft_subsequence_search.c\
		ft_lstmax.c\
		ft_lstmin.c\
		ft_lstnew.c\
		ft_is_sorted.c\
		ft_lstsize.c\
		ft_push.c\
		ft_free.c \
		ft_rotate.c\
		ft_rrotate.c\
		ft_sort3.c\
		ft_sort4.c\
		ft_utils_parsing.c\
		ft_utils_parsing1.c\
		ft_utils_parsing2.c\
		lstswap.c\
		main.c\
		parsing.c\

OBG = ${SRC:.c=.o}

all: ${NAME}

bonus :
	${MAKE} -C ${B_file}
	
%.o : %.c push_swap.h
	cc ${CFLAGS} -c $< -o $@
	
${NAME} : ${OBG} push_swap.h
	cc ${OBG}  -o ${NAME}
	@echo "\033[32m READY TO USE \033[31m*_^\033[0m \033[0m"

clean :
	@rm -rf ${OBG}
	@${MAKE} clean -C ${B_file}

fclean : clean
	@rm -rf ${NAME}
	@${MAKE} fclean -C ${B_file}

re : fclean all 

PHONY: clean 
