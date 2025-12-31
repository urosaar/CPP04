NAME = a.out
header = AMateria.hpp Character.hpp Cure.hpp Ice.hpp MateriaSource.hpp
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(header)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
