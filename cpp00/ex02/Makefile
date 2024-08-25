NAME	=	tests
CXX		=	c++

INC_DIR	=	.
SRC_DIR	=	.
OBJ_DIR	=	obj

INC		=	$(wildcard *.hpp)
SRC		=	$(wildcard *.cpp)
OBJ		=	$(SRC:%.cpp=$(OBJ_DIR)/%.o)

CFLAGS	=	-Wall -Wextra -Werror -std=c++98
CINC	=	-I$(INC_DIR)
LFLAGS	=
LLIBS	=

ifeq ($(DEBUG), 1)
CFLAGS	+= -fsanitize=address -g3
LFLAGS	+= -fsanitize=address -g3
endif

# ------------------------------------------------------------------------------

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(LFLAGS) $(OBJ) $(LLIBS) -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp $(INC) Makefile
	@mkdir -p $(@D)
	$(CXX) $(CFLAGS) $(CINC) -c $< -o $@

run:
	@clear
	@make -s all
	@./$(NAME) $(ARGS)

debug:
	@make -s run DEBUG=1

re: fclean all

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

print:
	@echo "NAME		$(NAME:%=\n%)\n"
	@echo "CXX		$(CXX:%=\n%)\n"
	@echo "INC		$(INC:%=\n%)\n"
	@echo "SRC		$(SRC:%=\n%)\n"
	@echo "OBJ		$(OBJ:%=\n%)\n"
	@echo "CFLAGS	$(CFLAGS:%=\n%)\n"
	@echo "CINC		$(CINC:%=\n%)\n"
	@echo "LFLAGS	$(LFLAGS:%=\n%)\n"
	@echo "LLIB		$(LLIB:%=\n%)\n"

.PHONY: all run re clean fclean print
