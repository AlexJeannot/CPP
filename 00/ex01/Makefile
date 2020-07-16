NAME = MyPhoneBook

SRCS =	./srcs/annexes.cpp	\
		./srcs/Contact.cpp	\
		./srcs/exec.cpp		\
		./srcs/main.cpp		\
		./srcs/PhoneBook.cpp

INC_SRCS =	./includes/Contact.hpp	\
			./includes/exec.hpp		\
			./includes/PhoneBook.hpp

OBJS = $(SRCS:.cpp=.o)

#INC = -I $(INC_SRCS)
CC = clang++
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):	$(OBJS) $(INC_SRCS)
			$(CC) $(FLAGS) $(OBJS) -o $@

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

test:		all
			./$(NAME)

.PHONY: 	clean fclean all re