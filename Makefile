CC		= gcc -Wall -Wextra -Werror -g
NAME	= push_swap
MINILIB	= ./libft/libft.a
HEADER	= .
OBJS	= $(SRCS:.c=.o)
SRCS	= push_swap.c ./movements/ft_s.c push_utils.c ft_free.c \
			parshe.c ./movements/formatbmod.c ft_sortnums.c ./movements/ft_p.c \
			./movements/ft_r.c ./movements/ft_rr.c ./sort/ft_check.c ./sort/ft_sort_short.c \
			./sort/ft_sort_undred.c

all:	$(NAME)


$(NAME):	$(OBJS)
	@make -C ./libft
	$(CC) $(OBJS) $(MINILIB) -o $(NAME)

.c.o:
			$(CC) -I $(HEADER) -c $< -o $(<:.c=.o)

clean:
	rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME) *.o
			@make fclean -C ./libft

re:			fclean all
