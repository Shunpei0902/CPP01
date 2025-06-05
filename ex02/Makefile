NAME = Brain
SRC_DIR = ./
OBJ_DIR = ./obj/
INC_DIR = ./

SRCS = main.cpp
OBJS = $(addprefix $(OBJ_DIR), $(SRCS:.cpp=.o))
INCS = $(shell find $(INC_DIR) -type f -name "*.hpp")

CXX = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS) $(INCS)
	$(CXX) $(FLAGS) $(OBJS) -I $(INC_DIR) -o $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp $(INCS)
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(FLAGS) -I $(INC_DIR) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean

re: fclean all

.PHONY: all clean fclean re


