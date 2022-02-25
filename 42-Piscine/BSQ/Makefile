NAME = bsq

CC = gcc
FLAGS = -Wall -Werror -Wextra
#OBJ = *.o
SRC = *.c
X = 10
Y = 18
Z = 3
MAP = map.txt
RM = rm -rf

all: $(NAME)
	
$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(NAME)

re : fclean all

run: re
	./$(NAME)

map: 
	perl map_gen.pl $(X) $(Y) $(Z) > $(MAP)
