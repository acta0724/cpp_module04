NAME = Animal
CC = c++
FLAGS = -Wall -Wextra -Wall -std=c++98
SRCS = Animal.cpp Cat.cpp Dog.cpp Brain.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

PHONY: all re clean fclean