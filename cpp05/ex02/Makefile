NAME=Bureaucrat
SRCS_PATH=srcs/
CPPS= Bureaucrat.cpp main.cpp Form.cpp PresidentialPardon.cpp RobotomyRequest.cpp ShrubberyCreation.cpp
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
