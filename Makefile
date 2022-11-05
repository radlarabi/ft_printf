FILES = 	ft_printf.c \
			hexa.c \
			ft_putnbr_u.c \
			ft_putnbr.c  \
			ft_putchar.c \
			ft_putstr.c \
			ft_print_void.c \
			hexa_unsigned_long.c \

CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
RM = rm -f

OSRCS = $(FILES:%.c=%.o)

all: $(NAME)

$(NAME): $(OSRCS)
	ar -rc $(NAME) $(OSRCS)

clean:
	$(RM) $(OSRCS) $(OSRCS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
