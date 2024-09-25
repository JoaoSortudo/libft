NAME = libft.a

COMP = cc -Wall -Werror -Wextra

SRC = ft_isalnum.c

OBJ = $(SRC: .c = .o)

all: $(NAME)
	$(COMP) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
