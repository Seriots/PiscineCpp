NAME := convert
CFLAGS := 
CC := cc
CXXFLAGS := 
CXX := c++
MAKE = /bin/make

define SRCS :=
	main.cpp
	get_type.cpp
	convert.cpp

endef
SRCS := $(strip $(SRCS))

define HDRS :=
	get_type.hpp
	convert.hpp
endef
HDRS := $(strip $(HDRS))

SRCS_DIR := srcs
OBJS_DIR := objs
INCS_DIR := srcs
LIB_DIR  := 

define LIBS :=

endef
LIBS := $(strip $(LIBS))

define LIB_NAMES :=

endef
LIB_NAMES := $(strip $(LIB_NAMES))

# ============================================================================ #
#                               Intermediates                                  #
# ============================================================================ #

#OBJ_FILES += $(patsubst %.c,$(OBJS_DIR)/%.o,$(SRCS))
OBJ_FILES += $(patsubst %.cpp,$(OBJS_DIR)/%.o,$(SRCS))
DEP_FILES := $(OBJ_FILES:.o=.d)
HDR_FILES := $(addprefix $(INCS_DIR)/,$(HDRS))

CFLAGS := $(CFLAGS) -Wall -Wextra
CXXFLAGS := $(CXXFLAGS) -Wall -Wextra -std=c++98

ifdef DEBUG
	CFLAGS := $(CFLAGS) -g3 -D DEBUG=1
	CXXFLAGS := $(CXXFLAGS) -g3 -D DEBUG=1
else
	CFLAGS := $(CFLAGS) -Werror -D DEBUG=0
	CXXFLAGS := $(CXXFLAGS) -Werror -D DEBUG=0
endif

# ============================================================================ #
#                                 Functions                                    #
# ============================================================================ #

all: $(NAME)

start_compiling:
	@echo "$(_GREEN)Start Compiling $(_NO_COLOR)"
.INTERMEDIATE:	start_compiling

clean:
	@echo "$(_RED)Objs and Deps: removing$(_NO_COLOR)"
	@rm -vf $(OBJ_FILES) $(DEP_FILES)
	@if [ -d $(OBJS_DIR) ]; then \
		find $(OBJS_DIR) -type d | xargs rmdir -p --ignore-fail-on-non-empty; \
	fi
.PHONY: clean

fclean: clean
	@echo "\n$(_RED)$(NAME): removing$(_NO_COLOR)"
	rm -f $(NAME)
	@for lib in $(LIB_NAMES); do \
		echo "\n$(_RED)$${lib}: cleaning$(_NO_COLOR)"; \
		$(MAKE) --no-print-directory -C $(LIB_DIR)/$${lib}/ fclean 2> /dev/null \
		|| $(MAKE) --no-print-directory -C $(LIB_DIR)/$${lib}/ clean 2> /dev/null \
		|| echo "Cannot be clean"; \
	done
.PHONY: fclean

re:
	@$(MAKE) fclean
	@$(MAKE) all
.PHONY: re

# ============================================================================ #
#                                   Colors                                     #
# ============================================================================ #

_GREY		= \033[30m
_RED		= \033[31m
_GREEN		= \033[32m
_YELLOW		= \033[33m
_BLUE		= \033[34m
_PURPLE		= \033[35m
_CYAN		= \033[36m
_WHITE		= \033[37m
_NO_COLOR	= \033[0m

# ============================================================================ #
#                                   Rules                                      #
# ============================================================================ #

$(NAME): Makefile $(LIBS) $(OBJ_FILES)
	@echo "\n$(_BLUE)Linkage $(NAME)$(_NO_COLOR)"
#	$(C) $(CFLAGS) -o $(NAME) $(OBJ_FILES) $(LIBS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ_FILES) $(LIBS)

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c  start_compiling
	@if [ ! -d $(dir $@) ]; then \
		mkdir -p $(dir $@); \
		echo "\n$(_BLUE)$(dir $@): Create$(_NO_COLOR)"; \
	fi
	$(CC) $(CFLAGS) -MMD -I $(INCS_DIR) -o $@ -c $<

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.cpp  start_compiling
	@if [ ! -d $(dir $@) ]; then \
		mkdir -p $(dir $@); \
		echo "\n$(_BLUE)$(dir $@): Create$(_NO_COLOR)"; \
	fi
	$(CXX) $(CXXFLAGS) -MMD -I $(INCS_DIR) -o $@ -c $<

-include $(DEP_FILES)

%.a:
	@echo "$(_GREEN)$(dir $@): make$(_NO_COLOR)"
	@$(MAKE) --no-print-directory -C $(dir $@)
	@echo ""
