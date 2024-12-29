SRCS = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
OBJS = $(addprefix $(OBJ_DIR), $(SRCS:.cpp=.o))
INCS = $(shell find $(INC_DIR) -type f -name "*.hpp")
SRC_DIR = ./src/
OBJ_DIR = ./obj/
INC_DIR = ./includes/
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -fno-omit-frame-pointer -g -O1
NAME = zombie

all: $(NAME)

$(NAME): $(OBJS) $(INCS)
	$(CC) $(FLAGS) $(OBJS) -I $(INC_DIR) -o $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp $(INCS)
	@mkdir -p $(OBJ_DIR)
	$(CC) $(FLAGS) -I $(INC_DIR) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re