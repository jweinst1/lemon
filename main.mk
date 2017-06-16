OBJS = out/lambda.o out/main.o
CC = g++
DEBUG = -g
CFLAGS = -std=c++11 -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

all: lemon

lemon : $(OBJS); $(CC) $(LFLAGS) $(OBJS) -o lemon

out/lambda.o : lambda.cpp lambda.h; $(CC) $(CFLAGS) lambda.cpp -o out/lambda.o

out/main.o : main.cpp; $(CC) $(CFLAGS) main.cpp -o out/main.o