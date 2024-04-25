CC					:=	cc
CFLAGS				:=	-Wall -Wextra -Werror -Iinclude

STRING_SRC_DIR  	:=	src/string
STRING_SOURCES  	:=	$(STRING_SRC_DIR)/u_strlen.c	\
						$(STRING_SRC_DIR)/u_strcmp.c

MEMORY_SRC_DIR  	:=	src/memory
MEMORY_SOURCES		:=	$(MEMORY_SRC_DIR)/u_map.c		\
						$(MEMORY_SRC_DIR)/u_calloc.c	\
						$(MEMORY_SRC_DIR)/u_memset.c

LIST_SRC_DIR		:=	src/list
LIST_SOURCES		:=	$(LIST_SRC_DIR)/u_find_node.c		\
						$(LIST_SRC_DIR)/u_add_node_back.c	\
						$(LIST_SRC_DIR)/u_get_last_node.c

INTERFACE_SRC_DIR	:=	src/interface
INTERFACE_SOURCES	:=	$(INTERFACE_SRC_DIR)/u_compare.c

NUMERIC_SRC_DIR		:=	src/numeric
NUMERIC_SOURCES		:=	$(NUMERIC_SRC_DIR)/u_hash.c

SOURCES				:=	$(STRING_SOURCES)		\
						$(MEMORY_SOURCES)		\
						$(LIST_SOURCES)			\
						$(INTERFACE_SOURCES)	\
						$(NUMERIC_SOURCES)

OBJECT_DIR			:=	obj
OBJECTS				:=	$(SOURCES:%.c=$(OBJECT_DIR)/%.o)

BIN_DIR				:=	bin
LIBRARY				:=	libutil.a

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
