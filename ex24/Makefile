NAME		:=	libft.a
SRCES 		:=	./srcs/ft_putchar.c	\
				./srcs/ft_putstr.c	\
				./srcs/ft_strcmp.c	\
				./srcs/ft_strlen.c	\
				./srcs/ft_swap.c
INC_DIR 	:=	./includes/
FLAGS		:=	-Werror -Wall -Wextra
CC			:=	cc

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -c $(SRCES) -I$(INC_DIR)
	ar rs $(NAME) *.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
