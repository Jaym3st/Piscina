SRCS	= main.c ft_strlen.c

OBJS	= ${SRCS:.c=.o}

NAME	= rush-02

CC	= gcc
RM	= rm -rf

OPTS = -Wall -Wextra -Werror

${NAME}:	${OBJS}
	${CC} ${OPTS} -o ${NAME} ${OBJS}

.c.o:
	${CC} ${OPTS} -c $< -o ${<:.c=.o}

all:	${NAME}

clean:
	${RM} ${OBJS}
	
fclean: clean
	${RM} ${NAME}