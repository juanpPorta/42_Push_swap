CC		= gcc 
NAME	= push_swap
MINILIB	= ./libft/libft.a
HEADER	= push_swap.h
OBJS	= $(SRCS:.c=.o)
SRCS	= push_swap.c ./movements/ft_s.c push_utils.c ft_free.c \
			parshe.c ./movements/formatbmod.c ft_sortnums.c

all:	$(NAME)


$(NAME):	$(OBJS)
	@make -C ./libft
	$(CC) $(OBJS) $(MINILIB) -o $(NAME)
			
.c.o:
			$(CC) -g -I $(HEADER) -c $< -o $(<:.c=.o)
			
clean:		
	rm -rf $(OBJS)
	
fclean:		clean
			rm -rf $(NAME) *.o
			@make fclean -C ./libft

re:			fclean all
