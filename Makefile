GCC = gcc
SRCS = 	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_memset.c
HEADER = -I libft.h
OBJS = ${SRCS:.c=.o}
NAME = libft.a
CFLAGS = -Wall -Wextra -Werror

.c.o:
	${GCC} ${CFLAGS} ${HEADER} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all
