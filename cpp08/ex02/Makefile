NAME=EasyFind
SRCS_PATH=srcs/
CPPS= main.cpp
SRCS= $(addprefix $(SRCS_PATH), $(CPPS))
OBJS=$(SRCS:.cpp=.o)
INCLUDES= -I ./includes
FLAGS= -Wall -Werror -Wextra $(INCLUDES)  -std=c++98 
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
