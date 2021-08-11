NAME	=	Materia

CC		=	clang++

CFLAGS	= -Wall -Werror -Wextra

SRCS	=	main.cpp \
			AMateria.cpp \
			Character.cpp \
			Cure.cpp \
			Ice.cpp \
			MateriaSource.cpp

OBJS	=	$(SRCS:.cpp=.o)

all:		$(NAME)

$(NAME):
			$(CC) $(CFLAGS) -c $(SRCS)
			$(CC) $(OBJS) -o $(NAME)


clean:
		rm -f $(OBJS)

fclean:	clean
		rm -f $(NAME)

re:		fclean all
