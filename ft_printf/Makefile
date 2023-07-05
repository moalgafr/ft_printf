NAME = libftprintf.a 
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
CC = cc

SRCS = ft_printf.c ft_puthex.c ft_putuns.c \
	ft_putptr.c ft_helper.c

OBJ = $(SRCS:.c=.o)
all: $(NAME)

# $(MAKE) -C

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
	$(RM) a.out

#$(MAKE) fclean -C 
fclean: clean
	$(RM) $(NAME)


re: fclean all

test: all
	cc test.c $(NAME) && ./a.out

.PHONY:	all clean fclean re 