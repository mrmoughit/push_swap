NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_print_low_hex.c\
	ft_print_pointer.c\
	ft_print_upp_hex.c\
	ft_printf.c\
	ft_putchar.c\
	ft_putnbr.c\
	ft_putstr.c\
	ft_print_adress.c

OBG = ${SRC:.c=.o}

all: ${NAME}

${NAME}: ${OBG}
	ar rc ${NAME} $^

%.o : %.c ft_printf.h
	${CC} ${CFLAGS} -c $< -o $@
clean:
	rm -rf ${OBG}
fclean: clean
	rm -rf ${NAME}
re: fclean all

.PHONY: clean fclean all re 