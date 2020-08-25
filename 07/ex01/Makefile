NAME = iter

SRCS =	iter.cpp

OBJS = $(SRCS:.cpp=.o)

CC = clang++

FLAGS = -Wall -Wextra -Werror

%.o:	%.cpp
		$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean all re