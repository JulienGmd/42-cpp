NAME	=	megaphone
CXX		=	c++

INC		=	$(wildcard *.hpp)
SRC		=	$(wildcard *.cpp)
OBJ		=	$(SRC:.cpp=.o)

CFLAGS	+=	-Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ) $(INC) Makefile
	$(CXX) $(CFLAGS) $(OBJ) -o $(NAME)

run:
	@clear
	@make -s all
	@./$(NAME) $(ARGS)

re: fclean all

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

.PHONY: all run re clean fclean
