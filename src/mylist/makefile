NAME=libmylist.a
SRC=new_node.c add_node.c add_elem.c traverse_string.c \
	empty_list.c remove_node.c append.c add_node_at.c \
	remove_node_at.c remove_last.c count_s_nodes.c \
	debug_int.c debug_char.c debug_string.c \
	print_char.c print_int.c print_string.c \
	node_at.c elem_at.c traverse_int.c traverse_char.c my_int2.c

OBJ=$(SRC:.c=.o)
RM=rm -f
INCLPATH=../../include
LIBPATH=../../lib
CFLAGS+= -I$(INCLPATH)

#Testing variables
TESTFILE=testlist.c
TESTPATH=../../test
LIB=mylist
DEPLIB=my

all: $(OBJ)
	ar -rc $(LIBPATH)/$(NAME) $(OBJ)
	ranlib $(LIBPATH)/$(NAME)

clean:
	-$(RM) *.o
	-$(RM) *.swp
	-$(RM) *~
	-$(RM) \#*
	-$(RM) *.core

fclean: clean
	-$(RM) $(LIBPATH)/$(NAME)

re: fclean all