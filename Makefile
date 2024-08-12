SRCS = stack.c operation00.c operation01.c operation02.c sorting.c
UTILS = operation_util.c sort_util.c
DIR_OBJ = ./obj/
DIR_UTIL = ./utils/
APP = ./app/push_swap.c
NAME = push_swap
FLAGS = -Wall -Wextra -Werror
SRC_OBJ = $(addprefix $(DIR_OBJ), $(SRCS:.c=.o))
UTIL_OBJ = $(addprefix $(DIR_OBJ), $(UTILS:.c=.o))

all: $(NAME)

$(NAME): $(APP) $(DIR_OBJ) $(SRC_OBJ) $(UTIL_OBJ)
	cc $(FLAGS) $(APP) $(SRC_OBJ) $(UTIL_OBJ) -o $(NAME)

$(DIR_OBJ)%.o: ./src/%.c ./includes/%.h
	cc $(FLAGS)  -c $< -o $@

$(DIR_OBJ)%.o: ./utils/%.c ./includes/%.h
	cc $(FLAGS) -c $< -o $@

$(DIR_OBJ):
	mkdir -p $(DIR_OBJ)
clean:
	rm -rf $(DIR_OBJ)
fclean:	clean
	rm $(NAME)
re:	fclean all

dev: $(APP) $(DIR_OBJ) $(SRC_OBJ) $(UTIL_OBJ)
	cc $(FLAGS) -g $(APP) $(SRC_OBJ) $(UTIL_OBJ) -o $(NAME)

