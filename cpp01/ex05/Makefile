NAME=Harl
SRCS=main.cpp Harl.cpp
OBJS=$(SRCS:.cpp=.o)
FLAGS = -Werror -Wall -Wextra -std=c++98
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
