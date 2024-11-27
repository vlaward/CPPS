NAME=test
SRCS=Zombie.cpp newZombie.cpp randomChump.cpp main.cpp
OBJS=$(SRCS:.cpp=.o)
FLAGS = -Werror -Wall -Wextra -std=c++98
CC=c++


%.o : %.cpp
	$(CC) $(FLAGS) -c $<

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean :
	rm $(OBJS)

fclean : clean
	rm $(NAME)

re : fclean
	make


