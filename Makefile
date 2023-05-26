NAME = libftprintf.a

SRC = ft_printf.c\
	ft_put_hex.c\
	ft_putchar.c\
	ft_putnbr.c\
	ft_putstr.c\
	ft_putunsigned.c\
	nbrlen.c\
	ft_formatchecker.c\
	ft_put_pointer.c
	
OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	
re: fclean all

.PHONY: clean fclean all re bonus