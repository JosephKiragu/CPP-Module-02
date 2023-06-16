CXX = g++
CXXFLAGS = -Werror -Wextra -Wall -std=c++98
NAME = fixed_point
SRC = main.cpp Fixed.cpp
OBJ = $(SRC:.cpp=.o)
RM = rm -f

all:$(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re