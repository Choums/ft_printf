LIBFT	= ./libft

SRCS	= 	ft_printf.c

OBJS	= 	${SRCS:.c=.o}

NAME	= 	libftprintf.a

CC		= 	cc

CFLAGS	= 	-Wall -Wextra -Werror

.c.o	= 	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

RM		= 	rm -f

${NAME}:	${OBJS}
			ar rcs ${NAME} ${OBJS}

all:		${NAME}
			make all -C ${LIBFT}

clean:	
			${RM} ${OBJS}
			make clean -C ${LIBFT}

fclean:		clean
			${RM} ${NAME}
			make fclean -C ${LIBFT}

re:			fclean all

.PHONY:		all clean fclean re
