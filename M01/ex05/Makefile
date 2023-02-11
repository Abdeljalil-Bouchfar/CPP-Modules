NAME = harl
CFLAGS = c++ -std=c++98 -Wall -Wextra -Werror

FILES = main.cpp Harl.cpp
HEADERS = Harl.hpp
OBJS = $(FILES:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJS) $(HEADERS)
		$(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : clean all fclean re