NAME=Fixed
SRCS=main.cpp Fixed.cpp
OBJS=$(SRCS:.cpp=.o)
FLAGS= -Wall -Werror -Wextra -g3 -std=c++98
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
