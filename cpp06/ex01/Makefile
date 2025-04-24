NAME=Serlialized	
SRCS_PATH=srcs/
CPPS= Serialized.cpp main.cpp Data.cpp
SRCS= $(addprefix $(SRCS_PATH), $(CPPS))
OBJS=$(SRCS:.cpp=.o)
INCLUDES= -I ./includes
FLAGS= -Wall -Werror -Wextra $(INCLUDES)
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
