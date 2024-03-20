NAME = push_swap

SRCS = main.c\
	push_swap_utils.c

OBJS = $(SRCS: .c=.o)

CC = cc

CFLAGS = -Wall -Werror -Wextra #-g3 -fsanitize=address

INCLUDES = -I./lib/ft_printf -I./lib/libft

LIBS = -L./lib/ft_printf -L./lib/libft

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@ 

$(NAME): $(OBJS) push_swap.h
	make -C ./lib/ft_printf
	make -C ./lib/libft
	$(CC) $(CFLAGS) $(LIBS) -lftprintf -lft $(OBJS) -o $(NAME)

clean: 
	rm -f $(OBJS)
	make clean -C ./lib/ft_printf
	make clean -C ./lib/libft

fclean:
	rm -f $(NAME)
	make fclean -C ./lib/ft_printf
	make fclean -C ./lib/libft
	make clean

re: fclean all

.PHONY: all clean fclean re