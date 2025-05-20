NAME = libftprintf.a

SRCS = ft_printf.c conversions.c other_functions.c

OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		$(RM) $(OBJS)

fclean:clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re