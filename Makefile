GCC = gcc
SRCS = 
HEADER = -I ./includes
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
