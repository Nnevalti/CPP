NAME	=	megaphone

CC		=	clang++
CFLAGS	=	-Wall -Werror -Wextra

SRCS	=	megaphone.cpp

OBJS	=	$(SRCS:.cpp=.o)

$(NAME) :	$(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

all		:	$(NAME)


clean	:
			rm -f $(OBJS)

fclean	:	clean
			rm -f $(NAME)

re		:	fclean all
