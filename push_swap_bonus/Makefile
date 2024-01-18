# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/13 11:45:41 by abechcha          #+#    #+#              #
#    Updated: 2024/01/13 11:51:23 by abechcha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = checker

CFLAGS = -Wall -Wextra -Werror

SRC =	ft_Error_bonus.c \
    	ft_push_bonus.c \
    	ft_remove_nl_bonus.c \
    	ft_rotate_bonus.c \
        ft_rrotate_bonus.c \
        ft_strcmp_bonus.c \
    	ft_swap_bonus.c \
        get_next_line_bonus.c \
    	get_next_line_utils_bonus.c \
    	linked_list_fun_bonus.c \
        main_bonus.c \
    	parsing_bonus.c \
    	parsing1_utils_bonus.c \
		parsing2_utils_bonus.c \
    	parsing3_utils_bonus.c \
    	parsing_utils_bonus.c \
     	utils_bonus.c\
     	ft_free_bonus.c\

OBG = ${SRC:.c=.o}

all: ${NAME}

%.o : %.c bonus.h
	cc ${CFLAGS} -c $< -o $@

${NAME} : ${OBG} bonus.h
	cc ${CFLAGS} ${OBG}  -o ${NAME}
	@echo "\033[32m READY TO USE \033[31m*_^\033[0m \033[0m"

clean :
	rm -rf  ${OBG}

fclean : clean
	rm -rf ${NAME}

re : fclean all 

PHONY: clean