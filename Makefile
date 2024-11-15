NAME = libft
CC = gcc
FLAG = -Wall -Wextra -Werror
SRC = main.c tools.c

OBJ = $(SRC:%.c=%.o)

build: $(OBJ)
	$(CC) $(FLAG) $(OBJ) -o $(NAME)

%.o: %.C
	$(CC) $(FLAGS) 