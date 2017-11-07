CC = gcc
FLAGS = -Werror -Wall -Wextra

SRCS = main.c
OBJS = main.o

IDIR = ./includes

NAME = ft_display_file

all : $(NAME)
	
$(NAME) :
	$(CC) $(FLAGS) -c $(SRCS) -I $(IDIR)
	$(CC) $(OBJS) -o $(NAME)
	
clean :
	rm -f $(OBJS)
	
fclean : clean
	rm -f $(NAME)
	
re : fclean all
