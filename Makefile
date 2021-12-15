SRCS	= 	ft_printf.c printf_utils/convert.c printf_utils/except.c 

OBJS	= 	${SRCS:.c=.o}

NAME	= 	libftprintf.a

CC		= 	cc

CFLAGS	= 	-Wall -Wextra -Werror -I.

.c.o	= 	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

RM		= 	rm -f

${NAME}:	${OBJS}
			make all -C ./libft
			cp libft/libft.a ${NAME}
			ar rcs ${NAME} ${OBJS}

all:		${NAME}

clean:	
			${RM} ${OBJS}
			$(MAKE) clean -C ./libft 

fclean:		clean
			${RM} ${NAME}
			$(MAKE) fclean -C ./libft

re:			fclean all

.PHONY:		all clean fclean re
