CC		= gcc -Wall -Wextra -Werror
NAME	= push_swap
MINILIB	= ./libft/libft.a
HEADER	= push_swap.h
OBJS	= $(SRCS:.c=.o)
SRCS	= push_swap.c ./movements/ft_s.c push_utils.c ft_free.c \
			parshe.c ./movements/swaping.c ft_sortnums.c

all:	$(NAME)


$(NAME):	$(OBJS)
	@make -C ./libft
	$(CC) -g $(OBJS) $(MINILIB) -o $(NAME)
			
.c.o:
			$(CC) -g -I $(HEADER) -c $< -o $(<:.c=.o)
			
clean:		
	rm -rf $(OBJS)
	
fclean:		clean
			rm -rf $(NAME) 
			@make clean -C ./libft

re:			fclean all
