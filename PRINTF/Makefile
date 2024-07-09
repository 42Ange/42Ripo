NAME = libftprintf.a

CC = cc
FLAGS = -Werror -Wextra -Wall

HEADER_FILE = printf.h

SRCS = ft_putchar.c \
       ft_printf.c \
	   ft_putnbr.c \
	   ft_putstr.c \
	   ft_strlen.c \
	   ft_putnbr_base.c \
	   ft_putnbr_uns.c \
	   ft_print_ptr.c

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c $(HEADER_FILE)
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re