NAME = megaphone

SRCS = megaphone.cpp

OBJS = $(SRCS:%.cpp=objs/%.o)

CC = c++

HEADERS = .

CFLAGS = -Wall -Wextra -Werror -std=c++98

objs/%.o:./%.cpp
	@if [ ! -d $(dir $@) ]; then \
		mkdir -p $(dir $@); \
		echo "\n$(_BLUE)$(dir $@): Create$(_NO_COLOR)"; \
	fi
	$(CC) $(CFLAGS) -I$(HEADERS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -I$(HEADERS)  $(OBJS) -o $(NAME)

clean :
	rm -f $(NAME)

fclean : clean
	rm -f $(OBJS)
	@if [ -d objs/ ]; then \
		find objs/ -type d | xargs rmdir -p --ignore-fail-on-non-empty; \
	fi

re :
	make fclean
	make all

.PHONY : all clean fclean re