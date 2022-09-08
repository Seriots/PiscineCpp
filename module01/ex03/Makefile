NAME = violence

SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJS = $(SRCS:%.cpp=objs/%.o)

CC = c++

HEADERS = Weapon.hpp HumanA.hpp HumanB.hpp
INC= .

CFLAGS = -Wall -Wextra -Werror -std=c++98

_GREY		= \033[30m
_RED		= \033[31m
_GREEN		= \033[32m
_YELLOW		= \033[33m
_BLUE		= \033[34m
_PURPLE		= \033[35m
_CYAN		= \033[36m
_WHITE		= \033[37m
_NO_COLOR	= \033[0m

objs/%.o:./%.cpp
	@if [ ! -d $(dir $@) ]; then \
		mkdir -p $(dir $@); \
		echo "\n$(_BLUE)$(dir $@): Create$(_NO_COLOR)"; \
	fi
	$(CC) $(CFLAGS) -I$(INC) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS) $(HEADERS)
	$(CC) $(CFLAGS) -I$(INC)  $(OBJS) -o $(NAME)

clean :
	@echo "$(_RED)Remove$(_NO_COLOR) $(NAME)"
	@rm -f $(NAME)

fclean : clean
	@echo "$(_RED)Remove$(_NO_COLOR) $(OBJS)"
	@rm -f $(OBJS)
	@if [ -d objs/ ]; then \
		find objs/ -type d | xargs rmdir -p --ignore-fail-on-non-empty; \
	fi
re :
	make fclean
	make all

.PHONY : all clean fclean re