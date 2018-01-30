#variable delarations##
CC := g++
CFLAGS := -I./
#the output should be oops.o and the input to that is oopsprogram.cpp///
oops.o: oopsprogram.cpp
	$(CC)	$(CFLAGS)	-c oopsprogram.cpp -o oops.o 
dyn.o: dynamicpoly.cpp
	$(CC) $(CFLAGS) -c dynamicpoly.cpp -o dyn.o
pas.o: pass.cpp
	$(CC) $(CFLAGS) -c pass.cpp -o pas.o 
#compiling all the files together////// 
# not compiling everything but only compile files that are changed// // // // 

all: oops.o dyn.o pas.o 
	$(CC) $(CFLAGS) oops.o dyn.o pas.o -o new
#	$(CC) $(CFLAGS) -c oopsprogram.cpp -o oops.o
#	$(CC) $(CFLAGS) -o  dyn.o oops.o  
 

