NAME=Animals
SRCS_PATH=srcs/
CPPS=main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp
SRCS= $(addprefix $(SRCS_PATH), $(CPPS))
OBJS=$(SRCS:.cpp=.o)
FLAGS= -Wall -Werror -Wextra -g3
CC=clang++


%.o : %.cpp
	$(CC) $(FLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all
