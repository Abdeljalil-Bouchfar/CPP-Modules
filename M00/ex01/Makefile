NAME = phoneBook
CFLAGS = c++ -std=c++98 -Wall -Wextra -Werror

FILES = main.cpp phoneBook.cpp contact.cpp
HEADERS = phoneBook.hpp contact.hpp
OBJS = $(FILES:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJS) $(HEADERS)
		$(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : clean all fclean re