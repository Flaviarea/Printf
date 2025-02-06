NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_check_char.c ft_printf.c ft_put.c ft_putchar.c ft_putnbr.c ft_putnbr_hex.c ft_putp.c ft_putstr.c ft_putuns.c

OBJECTS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

%.o: %.c
	$(CC) $(CCFLAGS) -c $< -o $@
	
run: $(NAME)
	$(CC) $(CFLAGS) -o main main.c $(NAME)
	./main

clean:
	rm -f $(OBJECTS)
fclean: clean
	rm -f $(NAME) main
re: flcean all

.PHONY: all clean fclean re
