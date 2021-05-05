CC = g++
CFLAGS = -Wall -g -std=c++11

AIM = ch5s
TARGET = $(AIM)
OBJ = $(AIM).o
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@
%.o : %.cpp
	$(CC) $(CFLAGS) -c $<  -o $@

.PHONY:clean
clean:
	rm -rf $(OBJ)
