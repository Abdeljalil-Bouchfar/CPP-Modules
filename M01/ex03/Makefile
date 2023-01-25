NAME = violence
CFLAGS = c++ -std=c++98 -Wall -Wextra -Werror

FILES = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
HEADERS = Weapon.hpp HumanA.hpp HumanB.hpp
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