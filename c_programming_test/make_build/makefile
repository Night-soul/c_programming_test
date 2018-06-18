.SUFFIXES:.c .o  
  
CC=gcc  
  
SRCS1=main.c  
OBJS1=$(SRCS1:.c=.o)  
EXEC1=main  
  
SRCS2=main1.c  
OBJS2=$(SRCS2:.c=.o)  
EXEC2=main1
  
start: $(OBJS1) $(OBJS2)  
	$(CC) -o $(EXEC1) $(OBJS1)  
	$(CC) -o $(EXEC2) $(OBJS2)  
	@echo "-----------------------------OK-----------------------"  
  
.c.o:  
	$(CC) -Wall -g -o $@ -c $<  
  
clean:  
	rm -rf $(EXEC1) $(OBJS1)  
	rm -rf $(EXEC2) $(OBJS2)  
