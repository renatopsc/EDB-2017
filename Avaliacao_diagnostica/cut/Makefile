 
 
PROG = cut

CC = g++

CPPFLAGS = -O0 -g -Wall -ansi -pedantic

OBJS = cut.o


$(PROG): $(OBJS)
	$(CC) -o $(PROG) $(OBJS)

cut.o:
	$(CC) $(CPPFLAGS) -c cut.cpp


clean:
	rm -f core $(PROG) $(OBJS)
 
 
