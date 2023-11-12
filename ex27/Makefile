OUT			:= ft_display_file
CC			:= cc
FLAGS_SRC	:= -Wall -Wextra -Werror -o
SRC			:= ft_display_file.c 

all:  $(OUT)

$(OUT):	$(SRC)
	$(CC) $(FLAGS_SRC) $(OUT) $(SRC)
	@echo "the executable file" $(OUT) "is compiled"

clean:


fclean: clean
	rm -f $(OUT)
	@echo "executable file" $(OUT) "is removed"

re: fclean all
	@echo "executive file" $(OUT) "is recompiled"

.PHONY:	all clean fclean re