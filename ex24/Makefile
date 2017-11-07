CC = gcc
AR = ar

ARFLAGS = rcs
CCFLAGS = -Werror -Wall -Wextra

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

IDIR = ./includes

NAME = libft.a

all : $(NAME)
	
$(NAME) :
	$(CC) $(CCFLAGS) -c $(SRCS) -I $(IDIR)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	
clean :
	rm -f $(OBJS)
	
fclean : clean
	rm -f $(NAME)
	
re : fclean all
