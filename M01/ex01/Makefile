NAME = zombie
CFLAGS = c++ -std=c++98 -Wall -Wextra -Werror

FILES = main.cpp Zombie.cpp
HEADERS = Zombie.hpp
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