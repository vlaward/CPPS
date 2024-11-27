NAME=Scav	Trap
SRCS=main.cpp ClapTrap.cpp
OBJS=$(SRCS:.cpp=.o)
FLAGS= -Wall -Werror -Wextra
CC=clang++


%.o : %.cpp
	$(CC) $(FLAGS) -c $<

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all
