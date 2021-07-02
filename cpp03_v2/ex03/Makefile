NAME	=	DiamondTrap

CC		=	clang++

CFLAGS	= -Wall -Werror -Wextra -Wshadow -Wno-shadow

SRCS	=	main.cpp \
			ClapTrap.cpp \
			ScavTrap.cpp \
			FragTrap.cpp \
			DiamondTrap.cpp

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
