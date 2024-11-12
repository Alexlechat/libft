SRC = ft_isalpha.c \
	ft_isdigit.c \
	ft_isalumn.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy \
	ft_strlcat \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c

OBJS = $(SRC:.c=.o)

CC = cc

HEADER = libft.h

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re



