CC=gcc
CFLAGS=-c -Wall
LIST = doubly_linked_list

list: $(LIST).h $(LIST).c
	$(CC) $(CFLAGS) $(LIST).h $(LIST).c
	
clean:
	rm -rf *o *~ *gch list
