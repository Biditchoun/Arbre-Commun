SOURCES = main.c

OBJECTS = $(SOURCES:.c=.o)

FLAGS = -Wall -Werror -Wextra

COMPILER = cc

NAME = ft_display_file

all: $(NAME)

$(NAME): $(OBJECTS)
	$(COMPILER) $(FLAGS) $(OBJECTS) -o $(NAME)

$(OBJECTS): %.o:%.c
	$(COMPILER) $(FLAGS) -c $< -o $@

clean: 
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
