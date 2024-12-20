NAME = libft.a

COMP = cc -Wall -Werror -Wextra

SRC = ft_strjoin.c \
      ft_putchar_fd.c \
      ft_memchr.c \
      ft_memmove.c \
      ft_strnstr.c \
      ft_atoi.c \
      ft_isdigit.c \
      ft_strdup.c \
      ft_substr.c \
      ft_itoa.c \
      ft_strncmp.c \
      ft_tolower.c \
      ft_strlcat.c \
      ft_strchr.c \
      ft_isprint.c \
      ft_strlen.c \
      ft_strtrim.c \
      ft_putstr_fd.c \
      ft_putnbr_fd.c \
      ft_strlcpy.c \
      ft_bzero.c \
      ft_calloc.c \
      ft_putendl_fd.c \
      ft_strrchr.c \
      ft_striteri.c \
      ft_memcpy.c \
      ft_isalnum.c \
      ft_split.c \
      ft_strmapi.c \
      ft_memset.c \
      ft_isascii.c \
      ft_isalpha.c \
      ft_memcmp.c \
      ft_toupper.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@make -C printf
	@cp printf/libftprintf.a .
	@ar -rcs $(NAME) $(OBJ)

%.o: %.c
	$(COMP) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) libftprintf.a

re: fclean all

.PHONY: all clean fclean re
