CC				:=	cc
CFLAGS			:=	-Wall -Wextra -Werror -Iinclude

STRING_SRC_DIR  :=	src/string
STRING_SOURCES  :=	$(STRING_SRC_DIR)/u_strlen.c

SOURCES			:=	$(STRING_SOURCES)

OBJECT_DIR		:=	obj
OBJECTS			:=	$(SOURCES:%.c=$(OBJECT_DIR)/%.o)

BIN_DIR			:=	bin
LIBRARY			:=	libutil.a

all: $(BIN_DIR)/$(LIBRARY)

$(BIN_DIR)/$(LIBRARY): $(OBJECTS)
	mkdir -p $(BIN_DIR)
	ar rcs $@ $(OBJECTS)

$(OBJECT_DIR)/%.o: %.c
	mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJECT_DIR)

fclean: clean
	rm -rf $(BIN_DIR)

re: fclean all

.PHONY: all clean fclean re
