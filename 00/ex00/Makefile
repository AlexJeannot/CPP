NAME = megaphone

SRCS = ./megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

CC = clang++
FLAGS = -Wall -Wextra -Werror -std=c++11

BLUE = \033[38;5;69m
GREEN = \033[38;5;113m
PURPLE = \033[38;5;165m
RESET = \033[0m

%.o : %.cpp
			$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME):	$(OBJS)
			$(CC) $(FLAGS) $(OBJS) -o $@

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY: 	clean fclean all re
.SILENT:	test