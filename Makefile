NAME		= libft.a
FLAGS		= -Wall -Werror -Wextra
FILES		= ft_strlen.c \
				ft_calloc.c \
				ft_bzero.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strlcpy.c \
				ft_strlcat.c \
				ft_strnstr.c \
				ft_strncmp.c \
				ft_strdup.c \
				ft_memset.c \
				ft_memcpy.c \
				ft_memccpy.c \
				ft_memcmp.c \
				ft_memchr.c\
				ft_memmove.c \
				ft_atoi.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_isalnum.c \
				ft_tolower.c \
				ft_toupper.c \
				ft_itoa.c \
				ft_strmapi.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_split.c \
				ft_substr.c \
				ft_putstr_fd.c \
				ft_putchar_fd.c \
				ft_putnbr_fd.c \
				ft_putendl_fd.c \
				ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_isspace.c
OBJ			= $(FILES:.c=.o)

all: $(NAME)

$(OBJ): $(FILES)
	gcc -c $(FLAGS) $(FILES)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
