NAME	= MutantStack

CC		= clang++

CFLAGS	= -Wall -Werror -Wextra -std=c++98

SRCS	= main.cpp

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
