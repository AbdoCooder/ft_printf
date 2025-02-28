CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_printf.c ft_puthex_fd.c ft_putunint_fd.c
OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean
