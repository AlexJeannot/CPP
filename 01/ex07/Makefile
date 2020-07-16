NAME = replace

SRCS = 	./annexes.cpp \
		./replace.cpp

INCS = ./replace.hpp

OBJS = $(SRCS:.cpp=.o)

CC = clang++
FLAGS = -Wall -Wextra -Werror

BLUE = \033[38;5;69m
GREEN = \033[38;5;113m
PURPLE = \033[38;5;165m
RESET = \033[0m

all: $(NAME)

$(NAME):	$(OBJS) $(INCS)
			$(CC) $(FLAGS) $(OBJS) -o $@

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

test:		all
			sh test.sh

.PHONY: 	clean fclean all re test
.SILENT:	test