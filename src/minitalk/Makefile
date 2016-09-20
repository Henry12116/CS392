CLINAME=client
CLISRC=client.c

SERVNAME=server
SERVSRC=server.c

CLIOBJ=$(CLISRC:.c=.o)
SERVOBJ=$(SERVSRC:.c=.o)

RM=rm -f

INCLPATH=../../include
LIBPATH=../../lib
CFLAGS+= -I$(INCLPATH)
LDFLAGS+= -L$(LIBPATH)
LDLIBS+= -lmy

all: mylib server client

client: $(CLIOBJ)

server: $(SERVOBJ)

mylib:
	cd ../mylib && make

myfclean:
	cd ../mylib && make fclean

mylibclean:
	cd ../mylib && make clean

clean: mylibclean
	-$(RM) *.o
	-$(RM) *.swp
	-$(RM) *~
	-$(RM) \#*
	-$(RM) *.core

fclean: myfclean clean
	-$(RM) $(CLINAME)
	-$(RM) $(SERVNAME)

re: fclean all