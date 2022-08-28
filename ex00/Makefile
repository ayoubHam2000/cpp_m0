FILES = \
	megaphone.cpp

OBJ = $(FILES:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = megaphone

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(OBJ) -o $(NAME)

$(OBJ): %.o:%.cpp
	c++ $(CFLAGS) -c $(@:%.o=%.cpp) $(DEPFLAGS) -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
