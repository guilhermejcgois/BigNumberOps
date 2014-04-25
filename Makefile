CC=gcc
CFLAGS=-c -Wall
LIST = doubly_linked_list
BIGN = big_number

all: $(BIGN)

$(BIGN): $(BIGN).o $(LIST).o main.c
	$(CC) $(BIGN).o $(LIST).o main.c -o $(BIGN)

$(BIGN).o: $(BIGN).h $(BIGN).c
	$(CC) $(CFLAGS) $(BIGN).h $(BIGN).c

$(LIST).o: $(LIST).h $(LIST).c
	$(CC) $(CFLAGS) $(LIST).h $(LIST).c

debug: $(BIGN).o $(LIST).o main.c
	$(CC) -g $(BIGN).o $(LIST).o main.c -o $(BIGN)
	
clean:
	rm -rf *o *~ *gch list
