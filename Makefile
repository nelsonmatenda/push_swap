SRCS = list.c operation00.c operation01.c
DIR_OBJ = ./obj/
DIR_UTILS = ./utils/
APP = ./app/push_swap.c
NAME = push_swap
FLAGS = -Wall -Wextra -Werror
OBJ = $(addprefix $(DIR_OBJ), $(SRCS:.c=.o))

all: $(NAME)

$(NAME):  $(DIR_OBJ) $(OBJ)
	cc $(FLAGS) $(APP) $(OBJ) -o $(NAME)

$(DIR_OBJ)%.o: ./src/%.c ./includes/%.h
	cc $(FLAGS) -c $< -o $@

$(DIR_OBJ):
	mkdir -p $(DIR_OBJ)
clean:
	rm -rf $(DIR_OBJ)
fclean:	clean
	rm $(NAME)
re:	fclean all

