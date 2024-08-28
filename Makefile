SRCS		= stack.c operation00.c operation01.c operation02.c sorting.c \
				turk.c parsing.c exit.c
UTILS		= operation_util.c sort_util.c turk_util00.c turk_util01.c ft_split.c \
				ft_substr.c parsing_util.c
DIR_OBJ		= ./obj/
DIR_UTIL	= ./utils/
APP			= ./app/push_swap.c
NAME		= push_swap
FLAGS		= -Wall -Wextra -Werror
SRC_OBJ		= $(addprefix $(DIR_OBJ), $(SRCS:.c=.o))
UTIL_OBJ	= $(addprefix $(DIR_OBJ), $(UTILS:.c=.o))
############  CORES ############
BLUE		= \033[0;34m
RESET		= \033[0m
GREEN		= \033[0;32m
############  ##### ############

all: $(NAME)

$(NAME):		$(APP) $(DIR_OBJ) $(SRC_OBJ) $(UTIL_OBJ)
				@/bin/echo -n .
				@cc $(FLAGS) $(APP) $(SRC_OBJ) $(UTIL_OBJ) -o $(NAME)
				@printf "\n${BLUE}%-44s${RESET} ${GREEN}%s${RESET}\n" "${NAME}" "compilado"

$(DIR_OBJ)%.o:	./src/%.c
				@/bin/echo -n .
				@cc $(FLAGS) -g -c $< -o $@

$(DIR_OBJ)%.o:	./utils/%.c
				@/bin/echo -n .
				@cc $(FLAGS) -g -c $< -o $@

$(DIR_OBJ):
				@mkdir -p $(DIR_OBJ)
				@printf "${BLUE}%-44s${RESET} ${GREEN}%s${RESET}\n" "Arquivo /obj" "criado"

clean:
				@rm -rf $(DIR_OBJ)
				@printf "${BLUE}%-44s${RESET} ${GREEN}%s${RESET}" "Remover objectos" "sucesso"

fclean:			clean
				@rm $(NAME)
				@printf "\n${BLUE}%-44s${RESET} ${GREEN}%s${RESET}\n" "Remover ${NAME}" "sucesso"

re:				fclean all
