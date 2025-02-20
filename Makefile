NAME = libftprintf.a
HEADER = ft_printf.h
AR = ar rcs
FLAGS = -Wall -Wextra -Werror
SRC = ft_putstr.c \
	ft_putnbr.c \
	ft_puthexlow.c \
	ft_puthexupper.c \
	ft_putuns.c \
	ft_putpointer.c \
	ft_printf.c \
	ft_putchar.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	cc $(FLAGS) -I . -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
